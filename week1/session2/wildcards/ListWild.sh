#!/bin/bash
#create variable called files listing all of the text files
#loop through this list and print out the first line from each file
files="$( ls *.txt )"
echo $files 
length=$( $files | wc -w)
#echo $length
#for ((counter=0; counter<$length;counter++)) do

#line=$(head -n 1 filename)
for value in "${files[*]}";
do 
 echo $value
done 


