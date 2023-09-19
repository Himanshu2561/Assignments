#!/bin/bash

read -p "Enter a number to print it in reverse: " number

rev=0

while [ "$number" -ne 0 ]; do
    dig=$((number % 10))
    rev=$((rev * 10 + dig))
    number=$((number / 10))
done

echo $rev
