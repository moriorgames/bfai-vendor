#!/usr/bin/env bash

counter=10

for file in *.png
do
    echo "$counter.png"
    mv "$file" "$counter.png"
    counter=$[counter+1]
done
