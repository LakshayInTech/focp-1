#include <stdio.h>
#include <math.h>
#include<windows.h>

// Function prototypes
void addition();
void subtraction();
void multiplication();
void division();
void logarithm();
void squareRoot();

int main() {
    int choice;
    system("cls");
    while (1) {
        printf("\nSimple Calculator\n\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic Values (Natural Log)\n");
        printf("6. Square Root\n");
        printf("7. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                logarithm();
                break;
            case 6:
                squareRoot();
                break;
            case 7:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

// Addition function
void addition() {
    system("cls");
    double num1, num2;
    printf("Addition :  \n");
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 + num2);
}

// Subtraction function
void subtraction() {
    system("cls");
    double num1, num2;
    printf("Subtraction :  \n");
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 - num2);
}

// Multiplication function
void multiplication() {
    system("cls");
    double num1, num2;
    printf("Multiplication :  \n");
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 * num2);
}

// Division function
void division() {
    system("cls");
    double num1, num2;
    printf("Division :  \n");
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 != 0) {
        printf("Result: %.2lf\n", num1 / num2);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
}

// Logarithmic function
void logarithm() {
    system("cls");
    double num;
    printf("Logarithm :  \n");
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num > 0) {
        printf("Natural logarithm (log) of %.2lf is %.2lf\n", num, log(num));
    } else {
        printf("Error! Logarithm of non-positive numbers is not defined.\n");
    }
}

// Square Root function
void squareRoot() {
    system("cls");
    double num;
    printf("Square Root :  \n");
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("Square root of %.2lf is %.2lf\n", num, sqrt(num));
    } else {
        printf("Error! Square root of a negative number is not defined.\n");
    }
}