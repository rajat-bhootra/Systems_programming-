#include <stdio.h>

/*
 Write a C program that takes three integers as input and prints their maximum values using a ternary operator.
*/

int main() {
    int a, b, c, max;

    // Taking three integers as input
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using ternary operators to find the maximum
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Printing the maximum value
    printf("The maximum value is: %d\n", max);
}

