#!/bin/bash
admin="RAJAT"
read -p "Enter your name? " name 
if [[ ${name} == ${admin} ]] ; then
    echo "Welcome,admin!!"
else
    echo "FUCK OFF!! $name"
fi 
