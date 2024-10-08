#include<stdio.h>

/*Write a C program that takes the length and breadth of a rectangle as input and
prints its area and perimeter.
NOTE: If the inputs are invalid, display an appropriate message.*/

int main(){
    // take length and breadth from user.
    float len,brth;
    printf("Enter the length of rectangle: ");
    scanf("%f",&len);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&brth);
    //prnit perimeter and area of rectangle.
    printf("Area of rectangle: %f\n",len*brth);
    printf("Perimeter of rectangle: %f\n",2*(len+brth));
}
