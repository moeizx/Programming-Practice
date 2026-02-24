'''Write a Python program that lists all files and directories in 
the current directory and prints them one by one.'''

import os

# specify directory path
path = "."

# get list of files and directories
contents = os.listdir(path)

# print each item
print("Items in the directory:")
for _ in contents:
    print(_)