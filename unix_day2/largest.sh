#!/bin/bash

read -p "Enter the first number: " no1
read -p "Enter the second number: " no2
read -p "Enter the third number: " no3

if [ $no1 -gt $no2 && $no1 -gt $no3 ]; then
	echo Number 1 is greater
elif [ $no2 -gt $no1 && $no2 -gt $no3 ]; then
	echo Number 2 is greater

else
	echo Number 3 is greater
fi
