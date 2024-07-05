import os
import subprocess

# 要遍历的根目录
root_dir = r'C:\Users\Lenovo\Desktop\workspace'

# 递归遍历目录和子目录
for subdir, _, files in os.walk(root_dir):
    for file in files:
        if file.endswith('.cpp'):
            file_path = os.path.join(subdir, file)
            # 获取文件名而不带扩展名
            file_name = os.path.splitext(file)[0]
            # 可执行文件的路径
            exe_path = os.path.join(subdir, file_name + '.exe')
            # 编译命令
            compile_command = f'g++ "{file_path}" -o "{exe_path}"'
            print(f'正在编译 {file_path} ...')
            try:
                subprocess.run(compile_command, check=True, shell=True)
                print(f'{exe_path} 编译成功')
            except subprocess.CalledProcessError as e:
                print(f'编译 {file_path} 失败: {e}')

print('所有文件编译完成')
