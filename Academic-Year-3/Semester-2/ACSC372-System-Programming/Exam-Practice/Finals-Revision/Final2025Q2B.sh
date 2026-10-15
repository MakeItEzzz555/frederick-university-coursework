#!/bin/bash

file="numbers.txt"

> "$file"

for ((i=1; i<=5; i++))
do
    echo "Enter integer number $i:"
    read num
    echo "$num" >> "$file"
done

sort -nr "$file" | uniq