#include<stdio.h>

int main() {
    int num;

    // Input an integer between 0 and 31
    printf("Enter a number between 0 and 31: ");
    scanf("%d", &num);

    // Check if input is in the valid range
    if (num < 0 || num > 31) {
        printf("Number out of range. Please enter a number between 0 and 31.\n");
        return 1; // Exit if out of range
    }

    // Print the binary representation by checking each bit
    printf("Binary representation: ");
    for (int i = 4; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Shift right by i and extract the least significant bit
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}

