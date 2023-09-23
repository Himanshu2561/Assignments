#!/ bin/bash

read -p "Number 1: " no1
read -p "Number 2: " no2
read -p "1. Addition 2. Subtraction 3. Multiplication 4. Division      Select your choice : " operator

while true
do
    case $operator in
    "1") res=`expr $no1 + $no2`
           echo "Sum is: $res" ;;
    "2") res=`expr $no1 - $no2`
           echo "Difference is: $res" ;;
    "3") res=`expr $no1 \* $no2`
           echo "Product is: $res" ;;
    "4") res=`expr $no1 / $no2`
           echo "Division is: $res" ;;
    "5") exit;;       
    esac
done

esac

