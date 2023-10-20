#!/bin/bash
#create as many numbered directories as u want when you run it
echo "how many directories do you want?"
read number 
for ((counter=0; counter<$number; counter++)) do
mkdir directory$counter
done
