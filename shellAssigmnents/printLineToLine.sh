#!/bin/bash

# checks if the number of command-line arguments ($#) is not equal to 1.
# using $0 to refer to the script's name
if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <from_line_number> <number_of_lines> <file_name>"
    exit 1
fi

# Extract the file name from the command-line argument
# ($1) takes the first command-line argument
from_line="$1"
lines="$2"
file_name="$3"

# Check if the file exists with -e
if [ -e "$file_name" ]; then
    sed -n "$from_line,$((from_line + lines - 1))p" $file_name
else
    echo "File '$file_name' does not exist."
fi
