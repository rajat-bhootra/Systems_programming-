#include<stdio.h>

/*
Write a C program that takes three integers as input and prints their maximum
values.
*/

int main(){
    //take three integers from user.
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    //first compare two integer and then whichever integer is maximum then compare it with the other int     //and print the maximum of them.
    if(a>b && a>c)printf("%d is maximum of %d,%d and %d.\n",a,a,b,c);
    else if(b>a && b>c)printf("%d is maximum of %d,%d and %d.\n",b,a,b,c);
    else printf("%d is maximum of %d,%d and %d.\n",c,a,b,c);
}
