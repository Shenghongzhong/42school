## ex07

Why are we using diff and patch?

The “patch” is a command for adding patch files to source code or text files. It takes input as a patch file and applies differences to original files

The “diff” is abbreviated as “differences” and is used to compare the content of two files and list the changes in standard output

Therefore, the safest method is to distribute improvements only

Getting a new file for each update is unrealistic or time-consuming. 

The modifications are made to the old file, and then a new or patched file is created for the new software version

`diff` command is to generate a patch file - diff stands for differences, first it will compare the content of two files and list the changes in standard output

`patch` command is to apply those changes


patch [options] [originalfile [patchfile]]

patch -pnum <patchfile>

`If you need multiple backups of a single backup file, then use the “-V” option. It sets the version number of each backup file. Execute the command given below`
