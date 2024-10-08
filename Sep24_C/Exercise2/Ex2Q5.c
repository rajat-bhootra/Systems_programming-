#include <stdio.h>

/*
Write a C program that takes an integer as input and checks, using bit wise
 operations, if it is divisible by 4.
*/

int main() {
    int num;

    // Taking an integer as input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using bitwise operation to check if the number is divisible by 4
    if ((num & 3) == 0)printf("%d is divisible by 4.\n", num);
    else printf("%d is not divisible by 4.\n", num);
}

