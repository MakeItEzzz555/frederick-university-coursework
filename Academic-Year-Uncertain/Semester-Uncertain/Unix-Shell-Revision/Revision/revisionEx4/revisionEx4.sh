#!/bin/bash

maxSize=0
maxDir=""

while read dir;
do

    size=$(du -s "$dir" | cut -f1)

    if [ $size -gt $maxSize ];then
    
        maxSize=$size
        maxDir=$dir

    fi

done

echo "MAXIMUM: $maxDir ($maxSize KB)"