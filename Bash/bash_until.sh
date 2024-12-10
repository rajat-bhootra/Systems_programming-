#!/bin/bash
read -p "Enter your name: " name
read -p "Enter your pass: " pass
echo 
until [[ $name == "Rajat" && $pass == "1144" ]] ; do
      read -p "Enter your name: " name
      read -p "Enter your pass: " pass
      echo
done 

echo Welcome,Admin!!!
