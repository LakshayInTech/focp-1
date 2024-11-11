// Highest Common Factor
#include <stdio.h>

int main() {
    int num1, num2, i;
    int hcf = 1;  // Start with 1 as HCF.

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    int min = (num1 < num2) ? num1 : num2;

    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;  // Update the HCF with the common divisor
        }
    }
    printf("The HCF of the two numbers is: %d\n", hcf);

    return 0;
}
