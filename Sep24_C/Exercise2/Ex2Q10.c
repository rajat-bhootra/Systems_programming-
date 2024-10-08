#include <stdio.h>

/*
 Write a C program that takes a 4-letter word as input and 
 toggles the case of all its
 letters using bitwise operations.
 Eg: Input: HeLLo
     Output: hEllO
*/

int main() {
    char word[5];// Array to hold the 4-letter word plus the null terminator

    // Taking a 4-letter word as input
    printf("Enter a 4-letter word: ");
    scanf("%4s", word);

    // Toggling the case using bitwise XOR operation
    for (int i = 0; i < 4; i++) {
        word[i] ^= 32;
    }

    // Printing the result
    printf("Toggled case: %s\n", word);
}

