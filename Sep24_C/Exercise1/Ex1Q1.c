#include<stdio.h>

/*Write a C program that takes the radius of a circle as input and computes its area.
NOTE: If the radius is non-negative, display an appropriate message.*/

int main(){
    // take float type input from user.
    float rad;
    printf("Enter the radius of circle: ");
    scanf("%f",&rad);
    //check if it is negative.
    if (rad<0)printf("Radius can't be negative.");
    // calculate the area of circle.
    else printf("Area of circle: %f\n",3.145158*rad*rad);
}

