#include<stdio.h>

/*
Write a C program that takes an integer as input, and display whether this integer is
negative, positive or zero.
*/

int main(){
    //take an integer from user.
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    //check whether num is positve,negative or zero.
    if (num>0)printf("Number %d is Positive.\n",num);
    else if(num<0)printf("Number %d is Negative.\n",num);
    else if (num==0)printf("Number %d is Zero\n",num);
    else printf("Something went wrong!!\n");
}
