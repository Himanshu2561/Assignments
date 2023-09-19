#!/bin/bash

# checks if the number of command-line arguments ($#) is not equal to 1.
# using $0 to refer to the script's name
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <source_file_name> <dest_file_name>"
    exit 1
fi

# Extract the file name from the command-line argument
# ($1) takes the first command-line argument
source_file_name="$1"
dest_file_name="$2"

# Check if the file exists with -e
if [ -e "$source_file_name" ]; then
    # Check if the destination file already exists
    if [ -e "$dest_file_name" ]; then
        read -p "File '$dest_file_name' already exists. Do you want to overwrite it? (y/n): " answer
        if [ "$answer" = "y" ]; then
            cp "$source_file_name" "$dest_file_name"
            echo "File '$source_file_name' copied to '$dest_file_name'."
        else
            echo "File '$dest_file_name' was not overwritten."
        fi
    else
        cp "$source_file_name" "$dest_file_name"
        echo "File '$source_file_name' copied to '$dest_file_name'."
    fi
else
    echo "File '$source_file_name' does not exist."
fi
