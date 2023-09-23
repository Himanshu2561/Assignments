#!/bin/bash

read -p "Enter the number whose factorial is to be found out: " number
fact=1
i=1
for((i=1;i<=number;i++))
do
     fact=`expr $fact \* $i`
done

echo "The factorial of the number $number is: $fact"