#!/bin/bash
#write your own mid command which will print a selection of lines
#from the middle of a file depending on the arguments you pass to it

#echo "Enter the first Line: "
#read $1
#echo "Second Line: "
#read $2
#echo "File Name: "
#read $3

#./mid.sh 5 8 cake.txt (passing in arguments)
head -$2 $3 | tail -$(($$2 - $1 + 1))
#$1 is first line, $2 is second, and $3 is the name of the file
