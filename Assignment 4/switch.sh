#!/bin/bash

echo -e -n "Enter 1st number : "
read n1

echo -e -n "Enter 2nd number : "
read n2

echo -e -n "Enter choice 1.Add 2.Subtract 3.Multiply 4.Divide : "
read op


case $op in 
	1) res=`expr $n1 + $n2`
		echo "Addition : $res"
		;;
	2) res=`expr $n1 - $n2`
                echo "Subtraction : $res"
                ;;
	3) res=`expr $n1 \* $n2`
                echo "Multiplication : $res"
                ;;
	4) res=`expr $n1 / $n2`
                echo "Division : $res"
                ;;
	*) echo "Invalid"
		;;

esac
