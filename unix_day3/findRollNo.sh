#!/bin/bash

if [ -e "student_data.txt" ]; then
    # Define the data file
    datafile="student_data.txt"
else
    touch student_data.txt
fi
# Function to search for a roll number and modify the record
modify_record() {
    local rollno="$1"
    local found=false

    # Search for the roll number in the data file
    while IFS=':' read -r roll name marks1 marks2 marks3; do
        if [ "$roll" == "$rollno" ]; then
            found=true
            echo "Roll No: $roll"
            echo "Name: $name"
            echo "Marks in Subject 1: $marks1"
            echo "Marks in Subject 2: $marks2"
            echo "Marks in Subject 3: $marks3"

            # Prompt the user for modifications
            read -p "Enter new name (press Enter to keep current name): " new_name
            read -p "Enter new marks in Subject 1 (press Enter to keep current marks): " new_marks1
            read -p "Enter new marks in Subject 2 (press Enter to keep current marks): " new_marks2
            read -p "Enter new marks in Subject 3 (press Enter to keep current marks): " new_marks3

            # Use the new values if provided, otherwise keep the current values
            name="${new_name:-$name}"
            marks1="${new_marks1:-$marks1}"
            marks2="${new_marks2:-$marks2}"
            marks3="${new_marks3:-$marks3}"

            # Replace the old record with the modified one
            sed -i "/^$roll:/c$roll:$name:$marks1:$marks2:$marks3" "$datafile"

            echo "Record updated successfully."
        fi
    done <"$datafile"

    if [ "$found" == false ]; then
        echo "Roll No Not Found"
    fi
}

# Main script starts here
clear
echo "Welcome to the Student Record Modifier"
read -p "Enter Roll No to modify student record: " roll_number

# Call the modify_record function to search and modify the record
modify_record "$roll_number"
