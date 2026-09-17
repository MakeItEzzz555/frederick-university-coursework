#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Error: No arguments given."
    echo "Usage: ./revision2ex2.sh num1 num2 num3 ..."
    exit 1
fi

# validate first argument before using it for min/max
if ! [[ $1 =~ ^-?[0-9]+$ ]]; then
    echo "Error: '$1' is not an integer."
    exit 1
fi

sum=0
count=0
min=$1
max=$1

echo "Numbers:"

for arg in "$@"; do
    if ! [[ $arg =~ ^-?[0-9]+$ ]]; then
        echo "Error: '$arg' is not an integer."
        exit 1
    fi

    echo "$arg"

    sum=$((sum + arg))
    count=$((count + 1))

    if [ "$arg" -lt "$min" ]; then
        min=$arg
    fi

    if [ "$arg" -gt "$max" ]; then
        max=$arg
    fi
done

average=$(echo "scale=3; $sum / $count" | bc)

echo "Sum: $sum"
echo "Average: $average"
echo "Minimum: $min"
echo "Maximum: $max"
echo "Number of elements: $count"
