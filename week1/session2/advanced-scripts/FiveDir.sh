#!/bin/bash
#use a bash loop to create five directories called calculation_? where ? is a number
for ((counter=1; counter<6; counter++)) do
mkdir directory_$counter
done

