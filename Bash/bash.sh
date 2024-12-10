#!/bin/bash 
#defining variable
name="RAJAT"
echo "HI, there my name is ${name}"
echo    

#multiple var
name="Rajat"
greet="Good Morning,"
echo $greet $name
echo   

#taking user input
echo what is your name?
read name
echo Hello,$name
echo 

#change the first echo statement with the read -p
read -p "Who are you? " input
echo Hi,$input
echo

