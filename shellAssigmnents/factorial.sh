#!/bin/bash

read -p "Find factorial of: " number

count=1
fact=1

while [ "$count" -lt "$number" ]; do
    fact=$((fact * count))
    count=$((count + 1))
done

fact=$((fact * number))

echo "Factorial of the number $number is $fact"
