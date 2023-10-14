#!/bin/bash
#use a bash loop to create five directories called calculation_? where ? is a number
#use a loop to create 5 directories, each one the parent of the previous one
for ((counter=1; counter<=5; counter++)) do
mkdir directory_$counter
cd directory_$counter
done

