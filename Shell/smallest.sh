#!/ bin/bash

read -p "Number 1: " no1
read -p "Number 2: " no2
read -p "Number 3: " no3

if [ $no1 -lt $no2 ] && [ $no1 -lt $no3 ]
    then 
        echo "Number 1 is smallest"
elif [ $no2 -lt $no3 ] && [ $no2 -lt $no1 ]
    then 
        echo "Number 2 is smallest"
else 
    echo "Number 3 is smallest"
fi