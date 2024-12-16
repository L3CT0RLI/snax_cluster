input_file = "output_softmax.txt"  # 输入文件名
output_file = "vectors_softmax_golden_c.txt"  # 输出文件名

try:
    with open(input_file, "r") as infile, open(output_file, "w") as outfile:
        for line in infile:
            # 去除换行符和多余空白
            hex_data = line.strip()

            # 检查长度是否是8的倍数
            if len(hex_data) % 8 != 0:
                print(f"警告: 行长度不是8的倍数: {hex_data}")

            # 按 8 个字符分块
            chunks = [hex_data[i:i+8] for i in range(0, len(hex_data), 8)]

            # 调整顺序：将最后一个块放到最前面
            reordered_chunks = chunks[-1:] + chunks[:-1]

            # 输出到终端和文件，添加 "0x" 前缀，并在行末添加逗号
            for chunk in reordered_chunks:
                formatted_chunk = f"0x{chunk},"  # 添加 "0x" 和逗号
                print(formatted_chunk)  # 输出到终端
                outfile.write(formatted_chunk + "\n")  # 写入到输出文件

    print(f"处理完成，结果已保存到 {output_file}")
except FileNotFoundError:
    print(f"错误: 文件 {input_file} 不存在")
except Exception as e:
    print(f"发生错误: {e}")