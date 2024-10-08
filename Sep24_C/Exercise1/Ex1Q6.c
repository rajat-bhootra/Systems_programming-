#include<stdio.h>

/*
Write a C program that takes two integers a and b as input and display whether a <
b, a = b, or a > b.
*/

int main(){
    //take two integers from user.
    int a,b;
    printf("Enter two integers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    //compare both the integers.
    if (a>b)printf("%d is greater than %d.\n",a,b);
    else if (a==b)printf("%d is equal to %d.\n",a,b);
    else if (a<b)printf("%d is less than %d.\n",a,b);
}
