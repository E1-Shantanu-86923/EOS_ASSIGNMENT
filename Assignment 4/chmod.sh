#!/bin/bash

echo -e -n "Enter filename : "
read file

if [ -f $file ]
then
	if [ -x $file ]
	then
		echo ""
	fi
else
	echo "File doesnt exist"
fi
