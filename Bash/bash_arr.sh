#!/bin/bash
#creating the array
#arr=("num1" "num2" "num3" "num4")
arr=($@)

#accessing the elements of array.
echo first ele: ${arr[0]}
echo last ele: ${arr[-1]}

#all elements
echo all elements: ${arr[@]}

#no. of elements in array. 
echo no. of ele: ${#arr[@]}
echo 

#array slicing
#While Bash doesn't support true array slicing, you can achieve similar
#results using a combination of array indexing and string slicing:
echo Array slicing:
echo ${arr[1]}
echo ${arr[@]:1:3}
echo ${arr[@]:3}
echo 

