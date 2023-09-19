#!/bin/bash

# Read user input
read -p "Enter a string:" input_string

# Remove spaces and convert to lowercase
input_string=$(echo "$input_string" | tr -d ' ' | tr '[:upper:]' '[:lower:]')

# Get the length of the string
len=${#input_string}

# Initialize variables for checking palindrome
is_palindrome="yes"
i=0
j=$((len - 1))

# Check if the string is a palindrome
while [ $i -lt $j ]; do
    left_char="${input_string:i:1}"
    right_char="${input_string:j:1}"

    if [ "$left_char" != "$right_char" ]; then
        is_palindrome="no"
        break
    fi

    i=$((i + 1))
    j=$((j - 1))
done

# Output the result
if [ "$is_palindrome" = "yes" ]; then
    echo "The string is a palindrome."
else
    echo "The string is not a palindrome."
fi
