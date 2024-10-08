#include <stdio.h>

/*
Write a C program to check whether a number has 0 as its last digit using ternary operator.
*/

int main() {
    int num;

    // Taking an integer as input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using ternary operator to check if the last digit is 0
    (num % 10 == 0) ? printf("The number ends with 0.\n") : printf("The number does not end with 0.\n");

}

