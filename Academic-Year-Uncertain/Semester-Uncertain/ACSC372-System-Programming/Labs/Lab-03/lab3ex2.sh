#!/bin/bash
echo "insert number 1:"
read number1
echo "ïnsert number 2:"
read number2

PROD=$((number1*number2))
SUM=$((number1+number2))

echo "Product of " $number1 " and " $number2 " is " $PROD
echo "Sum of ${number1} and ${number2} is ${SUM}"

