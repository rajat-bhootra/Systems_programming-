#!/bin/bash

#taking input from user as an argument.
arr=($@)
#number of elements.
n=${#arr[@]}

#printing the unsorted array.
echo "Array: ${arr[@]}"

#iterating through array
count=0
while [[ $count -lt $n ]]
do    
      #set firt element as a key.
      key=${arr[$count]}
      j=$(expr $count - 1)

      while [[ $j -ge 0 && $key -lt ${arr[$j]} ]]
      do 
	    #swap the elements if above conditions is true.  
	    arr[$(expr $j + 1)]=${arr[$j]}
	    j=$(expr $j - 1)
	    arr[$(expr $j + 1)]=$key
      done
      ((count++))
done 

#printing thr sorted array.
echo Sorted array: ${arr[@]}

