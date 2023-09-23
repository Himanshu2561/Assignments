#!/ bin/bash

read -p "Number 1: " no1
read -p "Number 2: " no2
read -p "Number 3: " no3

if [ $no1 -gt $no2 ] && [ $no1 -gt $no3 ]
    then 
        echo "Number 1 is greater"
elif [ $no2 -gt $no3 ] && [ $no2 -gt $no1 ]
    then 
        echo "Number 2 is greater"
else 
    echo "Number 3 is greater"
fi