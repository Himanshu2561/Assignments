#!/bin/bash

read -p "Enter a number: " number

while [ "$number" -ne 1 ]; do
    echo -n "$number "
    number=$((number - 1))
done

echo $number
