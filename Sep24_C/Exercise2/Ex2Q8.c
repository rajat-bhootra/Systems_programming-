#include <stdio.h>

/* 
Write a C program that takes as input two integers and prints appropriate 
messages if at least one or both are positive, negative or zero using logical operators.
*/

int main(){

    int num1,num2;

    // Taking two integers as input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Checking conditions using logical operators
    if (num1 > 0 && num2 > 0)printf("Both numbers are positive.\n");
    else if (num1 < 0 && num2 < 0)printf("Both numbers are negative.\n");
    else if (num1 == 0 && num2 == 0)printf("Both numbers are zero.\n");
    else if ((num1 > 0 && num2 <= 0) || (num2 > 0 && num1 <= 0))printf("At least one number is positive.\n");
    else if ((num1 < 0 && num2 >= 0) || (num2 < 0 && num1 >= 0))printf("At least one number is negative.\n");
    else if ((num1 == 0 && num2 != 0) || (num2 == 0 && num1 != 0))printf("At least one number is zero.\n");
    else printf("Something went wrong,try again !!");

}


