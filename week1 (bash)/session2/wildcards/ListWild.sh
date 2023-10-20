#!/bin/bash
#create variable called files listing all of the text files
#loop through this list and print out the first line from each file
files=$( ls *.txt )
for f in $files
do 
head -1 $f
done
#echo $length
#for ((counter=0; counter<$length;counter++)) do




