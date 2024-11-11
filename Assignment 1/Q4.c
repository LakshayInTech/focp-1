#include<stdio.h>

void menu();
void swapMethod1(int *a, int *b); // Pass by reference
void swapMethod2(int *a, int *b); // Pass by reference
void swapMethod3(int *a, int *b); // Pass by reference
void swapMethod4(int *a, int *b); // Pass by reference

int main(){
    int num1, num2, ch;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    menu();
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1:
            swapMethod1(&num1, &num2); // Pass addresses of num1 and num2
            break;
        case 2:
            swapMethod2(&num1, &num2); // Pass addresses of num1 and num2
            break;
        case 3:
            swapMethod3(&num1, &num2); // Pass addresses of num1 and num2
            break;
        case 4:
            swapMethod4(&num1, &num2); // Pass addresses of num1 and num2
            break;
        default:
            printf("Invalid Choice...\n");
            break;
    }
    return 0;
}

void menu(){
    printf("4 Methods to swap numbers\n");
    printf("1. Method 1 (using temporary variable)\n");
    printf("2. Method 2 (using arithmetic operations)\n");
    printf("3. Method 3 (using bitwise XOR)\n");
    printf("4. Method 4 (using multiple assignment)\n");
}

// 1st Method (using temporary variable)
void swapMethod1(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Swapped Numbers using Method 1: a = %d , b = %d\n", *a, *b);
}

// 2nd Method (using arithmetic operations)
void swapMethod2(int *a, int *b){
    *a = *a + *b;  // sum
    *b = *a - *b;  // subtract b from sum to get a
    *a = *a - *b;  // subtract new b from sum to get b
    printf("Swapped Numbers using Method 2: a = %d , b = %d\n", *a, *b);
}

// 3rd Method (using bitwise XOR)
void swapMethod3(int *a, int *b){
    *a = *a ^ *b;  // XOR a and b
    *b = *a ^ *b;  // XOR result with b to get a
    *a = *a ^ *b;  // XOR result with a to get b
    printf("Swapped Numbers using Method 3: a = %d , b = %d\n", *a, *b);
}

// 4th Method (using multiple assignment)
void swapMethod4(int *a, int *b){
    *a = *a + *b;  // sum
    *b = *a - *b;  // assign b to the original a value
    *a = *a - *b;  // assign a to the original b value
    printf("Swapped Numbers using Method 4: a = %d , b = %d\n", *a, *b);
}