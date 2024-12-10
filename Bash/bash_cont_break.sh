#!/bin/bash
for (( a = 1; a < 10; a++ ))
do
   echo "outer loop: $a"
   for (( b = 1; b < 100; b++ ))
   do
      if [[ $b -gt 5 ]]
      then
          break 2 
      fi
      echo "Inner loop: $b "
   done
done

echo 

for i in 1 2 3 4 5
do
   if [[ $i -eq 2 ]]
   then
       echo "skipping number 2"
       continue
   fi
   echo "i is equal to $i"
done
