#include <stdio.h>

// Function to convert a hexadecimal digit (0-9, A-F, a-f) to its decimal value
int hexDigitToDecimal(char hex) {
    if (hex >= '0' && hex <= '9') {
        return hex - '0';  // For '0'-'9', convert to 0-9
    } else if (hex >= 'A' && hex <= 'F') {
        return hex - 'A' + 10;  // For 'A'-'F', convert to 10-15
    } else if (hex >= 'a' && hex <= 'f') {
        return hex - 'a' + 10;  // For 'a'-'f', convert to 10-15
    } else {
        return -1;  // Invalid hexadecimal digit
    }
}

int main() {
    char hex[5];  // To store 4-character long hexadecimal input (plus '\0')
    int decimal = 0;

    // Input a 4-character hexadecimal string
    printf("Enter a 4-character long hexadecimal number: ");
    scanf("%4s", hex);  // Limit input to 4 characters

    // Process each character in the hexadecimal input
    for (int i = 0; i < 4; i++) {
        int value = hexDigitToDecimal(hex[i]);

        // If an invalid hexadecimal digit is found, print an error
        if (value == -1) {
            printf("Invalid hexadecimal digit found: %c\n", hex[i]);
            return 1;
        }

        // Shift the current decimal result left by 4 bits (multiply by 16) using bitwise shift
        decimal = (decimal << 4) | value;  // Add the current hexadecimal digit value
    }

    // Output the decimal result
    printf("Decimal representation: %d\n", decimal);

    return 0;
}

