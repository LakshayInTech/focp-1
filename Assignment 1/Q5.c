#include <stdio.h>

int isPerfectNumber(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is perfect
    if (isPerfectNumber(num)) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}

// Function to check if the number is perfect
int isPerfectNumber(int num) {
    int sum = 0;
    
    // Find divisors of the number and calculate their sum
    for (int i = 1; i <= num / 2; i++) { // We only need to check up to num/2
        if (num % i == 0) { // i is a divisor
            sum += i;
        }
    }
    
    // If sum of divisors equals the number, it's a perfect number
    if (sum == num) {
        return 1; // Perfect Number
    } else {
        return 0; // Not a Perfect Number
    }
}