#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    return decimal;
}

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary representation: 0\n");
        return;
    }
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice, num;
    printf("Choose the conversion you want to perform:\n\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal representation: %d\n", binaryToDecimal(num));
    }
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    }
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }
    return 0;
}