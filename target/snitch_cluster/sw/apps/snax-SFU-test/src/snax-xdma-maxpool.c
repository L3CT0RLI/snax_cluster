// Copyright 2024 KU Leuven.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Fanchen Kong <fanchen.kong@kuleuven.be>
 
#include "data.h"
#include "snax-xdma-lib.h"
#include "snrt.h"
 
int main() {
    // Set err value for checking
    int err = 0;
    // Obtain the start address of the TCDM memory
    uint32_t dma_load_input_start;
    uint32_t dma_load_input_end;
    uint32_t tcdm_baseaddress = snrt_cluster_base_addrl();
    // Put the input at the starting of tcdm
    uint8_t *tcdm_in = (uint8_t *)tcdm_baseaddress;
    // Put the output at the middle of tcdm
    uint8_t *tcdm_out = (uint8_t *)(tcdm_baseaddress + 32*64);
 
    if (snrt_is_dm_core()) {
        // The xdma core is the last compute core in the cluster
        uint32_t sstride_src[1] = {0};
        uint32_t sstride_dst[1] = {0};
        uint32_t tstride_src[5] = {0};
        uint32_t tbound_src[5] =  {0};
        uint32_t tstride_dst[3] = {0};
        uint32_t tbound_dst[3] =  {0};
 
        // Load the CFG from data.h
        sstride_src[0] = 8;
        sstride_dst[0] = 8;
        tstride_src[0] = 64;
        tstride_src[1] = 0;
        tstride_src[2] = 0;
        tstride_src[3] = 0;
        tstride_src[4] = 0;
        tbound_src[0] = 32;
        tbound_src[1] = 1;
        tbound_src[2] = 1;
        tbound_src[3] = 1;
        tbound_src[4] = 1;
        tstride_dst[0] = 64;
        tstride_dst[1] = 0;
        tstride_dst[2] = 0;
        tbound_dst[0] = 32;
        tbound_dst[1] = 1;
        tbound_dst[2] = 1;
 
        // First we need to transfer the input data from L3->TCDM
        snrt_dma_start_1d(tcdm_in, DataIn, 32 * 16 * sizeof(int32_t));
        snrt_dma_wait_all();
 
        // --------------------- Configure the Ext --------------------- //
 
        if (xdma_disable_dst_ext(0) != 0) {
            printf("Error in disabling xdma extension 0\n");
            err++;
        } else {
            printf("The xdma extension 0 is disabled\n");
        }
 
        if (xdma_disable_dst_ext(1) != 0) {
            printf("Error in disabling xdma extension 1\n");
            err++;
        } else {
            printf("The xdma extension 1 is disabled\n");
        }
 
        if (xdma_disable_dst_ext(2) != 0) {
            printf("Error in disabling xdma extension 2\n");
            err++;
        } else {
            printf("The xdma extension 2 is disabled\n");
        }
 
        uint32_t CSR_SFU[1] = { (1 << 30) + (1 << 25) };
        if (xdma_enable_dst_ext(3, CSR_SFU) != 0) {
            printf("Error in enabling xdma extension 1\n");
            err++;
        } else {
            printf("The xdma extension 3(SFU) is enabled\n");
        }

        // --------------------- Configure the AGU --------------------- //
        xdma_memcpy_nd(tcdm_in, tcdm_out, sstride_src, sstride_dst, 5,
                       tstride_src, tbound_src, 3, tstride_dst, tbound_dst,
                       0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        int task_id = xdma_start();
        xdma_wait(task_id);
 
        // --------------------- Checking the Results --------------------- //
        for (int i = 0; i < 32 * 16 * 4; i++) {
            if ((int8_t)tcdm_out[i] != C_golden[i]) {
                printf("The softmax is incorrect!\n");
                printf("tcdm_out[%d]=%d, C_golden[%d]=%d \n", i,
                       (int8_t)tcdm_out[i], i, C_golden[i]);
            }
        }
        printf("Checking is done. All values are right\n");
    }

    return 0;
}
