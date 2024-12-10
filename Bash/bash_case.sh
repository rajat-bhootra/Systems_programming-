#!/bin/bash 
read -p "Enter the name of a car brand: " car 

case $car in
       	
     Tesla)
	echo "$car's car factory is in USA."
        ;;

     BMW | Mercedes | Audi | Porshe)
	echo "$car's cae factory is in Germany."
        ;;

     Toyota | Mazada | Mitsubishi | Subaru)
	echo "$car's car factory is in Japan."
	;;

     *)
        echo "$car is an unknown car brand"
	;;

esac
