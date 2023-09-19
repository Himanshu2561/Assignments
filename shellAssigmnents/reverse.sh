#!/ bin/bash

read -p "Enter number to reverse: " number
reverse=0
while [ $number != 0 ]
    do
        mod=$(($number%10))
        reverse=$((reverse*10 + mod))
        number=$((number/10))
    done

echo "The reversed number is: $reverse"