import os
import zipfile
import fnmatch

def zipdir(path, ziph, exclude_patterns):
    for root, dirs, files in os.walk(path):
        for file in files:
            file_path = os.path.join(root, file)
            relative_path = os.path.relpath(file_path, path)
            if not any([fnmatch.fnmatch(relative_path, pattern) for pattern in exclude_patterns]):
                ziph.write(file_path, relative_path)

if __name__ == '__main__':
    # source_folder: 源文件夹路径
    # destination_zip: ZipFile对象
    # exclude_patterns: 要排除的文件和文件夹模式列表
    source_folder = './'
    destination_zip = './workspace.zip'
    exclude_patterns = ['*.tmp', '.gitignore', '.git/*', 'zip.py', 'complier.py', '问题题目.xlsx', 'workspace.zip']

    with zipfile.ZipFile(destination_zip, 'w', zipfile.ZIP_DEFLATED) as zipf:
        zipdir(source_folder, zipf, exclude_patterns)
