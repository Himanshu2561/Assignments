#!/bin/bash

for ((i = 0; i <= 10; i++)); do
    case "$i" in
    0)
        echo -n "zero "
        ;;
    1)
        echo -n "one "
        ;;
    2)
        echo -n "two "
        ;;
    3)
        echo -n "three "
        ;;
    4)
        echo -n "four "
        ;;
    5)
        echo -n "five "
        ;;
    6)
        echo -n "six "
        ;;
    7)
        echo -n "seven "
        ;;
    8)
        echo -n "eight "
        ;;
    9)
        echo -n "nine "
        ;;
    10)
        echo -n "ten "
        ;;
    esac
done
