#!/bin/bash

if [ $# -eq 0 ];then
    echo "Usage:  <filename> arg1 arg2 ..."
    exit 1
fi

min=$1

for num in "$@"
do
    if [ "$num" -lt "$min" ]
    then
        min=$num
    fi
done
echo "Minimum = $min"