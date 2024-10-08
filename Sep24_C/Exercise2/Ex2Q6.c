#include <stdio.h>

/*
 Write a Cprogram that takes a natural number as input and prints the remainder you
 get when it is divided by 3. This should be done in a single statement using the
 ternary operator. Hint: Nest the ternary operator.
*/

int main() {
    int num;

    // Taking a natural number as input
    printf("Enter a natural number: ");
    scanf("%d", &num);

    // Using nested ternary operators to find and print the remainder
    (num % 3 == 0) ? printf("The remainder after divided by 3 is 0.\n") : 
    (num % 3 == 1) ? printf("The remainder after divided by 3 is 1.\n") : 
                     printf("The remainder after divided by 3 is 2.\n");

}

