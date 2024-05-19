import shutil
import argparse
import os


def codeStuff():

    for folder in ["src"]:
        if not os.path.isdir(folder): continue

        src_folder = folder
        dest_folder = "chameleonTwistv1.0-JP/"+folder  # Overwrite the directory name folder

        shutil.copytree(src_folder, dest_folder, dirs_exist_ok=True)
    
    print("src copied")

    # Overwrite a file
    src_file = 'baserom.jp.z64'
    dest_file = "chameleonTwistv1.0-JP/"+src_file

    shutil.copy(src_file, dest_file)

    print("rom copied")

def generatedStuff():
    for folder in ["assets", "asm"]:
        if not os.path.isdir(folder): continue

        src_folder = folder
        dest_folder = "chameleonTwistv1.0-JP/"+folder  # Overwrite the directory name folder

        shutil.copytree(src_folder, dest_folder, dirs_exist_ok=True)
    print("generated stuffs copied")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "-c",
        "--code",
        help="Copy code stuff",
        action="store_true",
    )

    parser.add_argument(
        "-g",
        "--generated",
        help="Copy generated stuff",
        action="store_true",
    )

    args = parser.parse_args()

    if args.code:
        codeStuff()
    if args.generated:
        generatedStuff()