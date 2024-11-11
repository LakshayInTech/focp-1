// Subtraction using bitwise operator
#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        unsigned int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
int subtract(int a, int b) {
    // To subtract a - b, we add a to the two's complement of b
    b = add(~b, 1);  // b = -b (two's complement of b)
    return add(a, b); // a - b is now a + (-b)
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("The result of %d - %d is: %d\n", a, b, subtract(a, b));
    return 0;
}
