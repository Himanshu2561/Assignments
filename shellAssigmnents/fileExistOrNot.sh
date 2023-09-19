#!/bin/bash

# checks if the number of command-line arguments ($#) is not equal to 1.
# using $0 to refer to the script's name
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <file_name>"
    exit 1
fi

# Extract the file name from the command-line argument
# ($1) takes the first command-line argument
file_name="$1"

# Check if the file exists with -e
if [ -e "$file_name" ]; then
    echo "File '$file_name' exists."
else
    echo "File '$file_name' does not exist."
fi
