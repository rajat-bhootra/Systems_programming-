#include <stdio.h>

// Function to print the hexadecimal digit for a given value (0-15)
void printHexDigit(int value) {
    if (value >= 0 && value <= 9) {
        printf("%c", '0' + value);  // Print digits 0-9
    } else if (value >= 10 && value <= 15) {
        printf("%c", 'A' + (value - 10));  // Print A-F for values 10-15
    }
}

int main() {
    unsigned int num;
    
    // Input a number between 0 and 65535
    printf("Enter a number between 0 and 65535: ");
    scanf("%u", &num);

    if (num > 65535) {
        printf("Number out of range!\n");
        return 1;
    }

    // Array to store the hexadecimal digits (maximum 4 digits for 65535)
    int hexDigits[4];

    // Extract each 4-bit chunk (hex digit) using bitwise operations
    hexDigits[0] = (num >> 12) & 0xF;  // Extract the highest 4 bits
    hexDigits[1] = (num >> 8) & 0xF;   // Extract the next 4 bits
    hexDigits[2] = (num >> 4) & 0xF;   // Extract the next 4 bits
    hexDigits[3] = num & 0xF;          // Extract the lowest 4 bits

    // Print the hexadecimal representation (skip leading zeros)
    int leadingZero = 1;  // Used to skip leading zeros
    for (int i = 0; i < 4; i++) {
        if (hexDigits[i] != 0 || !leadingZero) {
            printHexDigit(hexDigits[i]);
            leadingZero = 0;
        }
    }

    // If all digits are 0, print a single 0
    if (leadingZero) {
        printf("0");
    }

    printf("\n");
    return 0;
}

