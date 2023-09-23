#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <file_path>"
    exit 1
elif [ $# -gt 1 ]; then
    echo "Error: Too many arguments. Please provide only one file path."
    exit 1
fi

file_path="$1"

if [ -e "$file_path" ]; then
    if [ -f "$file_path" ]; then
        echo "$file_path is a regular file."
    elif [ -d "$file_path" ]; then
        echo "$file_path is a directory."
    elif [ -h "$file_path" ]; then
        echo "$file_path is a symbolic link."
    else
        echo "$file_path is of an unknown file type."
    fi
else
    echo "File '"$file_path"' does not exist."
fi
