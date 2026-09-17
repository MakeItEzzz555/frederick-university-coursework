#!/bin/bash

if [ $# -eq 0 ]
then
    echo "Error: No input file provided."
    echo "Usage: ./lab3ex4.sh inputfile"
    exit 1
fi

input=$1

if [ ! -e "$input" ]
then
    echo "$input does not exist."
    exit 1
fi

if [ -L "$input" ]
then
echo "$input is a symbolic link."

elif [ -d "$input" ]
then
    echo "$input is a directory."

elif [ -f "$input" ]
then
    echo "$input is a regular file."

else
    echo "$input exists but is not a regular file, directory, or symbolic link."
fi
