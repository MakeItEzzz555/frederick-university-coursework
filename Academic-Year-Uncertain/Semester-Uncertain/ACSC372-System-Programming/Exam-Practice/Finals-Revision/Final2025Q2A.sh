#!/bin/bash

# This script is for the Final Exam Revision for Q2 2025
if [ ! -f "$1" ]; then
    echo "Error: File not found"
    echo "Usage: ./Final2025Q2A.sh <filename>"
    exit 1
fi

if [ ! -f "$1" ]; then
    echo "Error: File not found"
    exit 1
fi

while read -r line; do
    echo -e "\n$line"
done < "$1"