#!/bin/bash
#Create 3 files and let the user name and enter information into them
echo "Choose a name for file1, file2 and file3"
read file1
read file2
read file3
touch $file1.txt $file2.txt $file3.txt


