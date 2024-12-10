#!/bin/bash
read -p 'Enter a number: ' num
if [[ ${num} -gt 0 ]] ; then
	echo The number ${num} is positive.
elif [[ ${num} -lt 0 ]] ; then
	echo The number ${num} is negative.
else 
	echo The number is ZERO.
fi
