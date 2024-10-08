#include<stdio.h>

/*Write a C program that takes two integers a and b as input and prints their sum,
difference, product, quotient, and remainder.*/

int main(){ 
    //take two integer from user.
    int a,b;
    printf("Enter two integers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    //print the operation.
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
}

