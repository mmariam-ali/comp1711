#!/bin/bash
#what will this command print to the screen?
[user@host wildcards]$ for filename in *.txt
do
echo $filename
cat $filename > new-file.txt
done 
