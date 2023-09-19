#!/bin/bash

# Define a list of correctly spelled words (dictionary)
correct_words=("apple" "banana" "cherry" "date" "grape" "kiwi" "lemon" "orange" "pear" "strawberry")

# Check if the number of command-line arguments is not equal to 1
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <word_to_check>"
    exit 1
fi

# Extract the word to check from the command-line argument
word_to_check="$1"

# Function to check if a word is correctly spelled
check_spelling() {
    for word in "${correct_words[@]}"; do
    # $1 takes $word_to_check as the argument
        if [ "$word" == "$1" ]; then
            return 0 # Zero means no error
        fi
    done
    return 1 # one means something bad/error
}

# Check the spelling of the word
if check_spelling "$word_to_check"; then
    echo "The word '$word_to_check' is correctly spelled."
else
    echo "The word '$word_to_check' is misspelled."
fi
