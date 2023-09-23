#!/ bin/bash

read -p "Enter the number: " number
sum=0
while [ $number != 0 ]
    do
        mod=$(($number%10))
        sum=$((sum + mod))
        number=$((number/10))
    done

echo "The sum of the digits of the number is: $sum"