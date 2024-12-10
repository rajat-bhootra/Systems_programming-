#!/bin/bash

#counter=1
#while [ $counter -le 10 ] ; do 
#      echo $counter
#      ((counter++)) ; done

read -p "Enter your username: " usr
read -p "Enter your password: " pass

while [[ $usr != 'RAJAT' || $pass != '1144' ]] ; do
      echo "Access denied.Wrong password or username."
      echo "Please,try again!!!"
      echo 
      read -p "Enter your username: " usr
      read -p "Enter your password: " pass ; done

echo "Access granted,Welcome!!!"      
