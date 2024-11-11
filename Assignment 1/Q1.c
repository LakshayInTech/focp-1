// To check Armstrong Number
// 153 = 1*1*1 + 5*5*5 + 3*3*3 
#include<stdio.h>
#include<windows.h>
int main(){
    system("cls");
    int num;
    int originalNum, temp, remainder, result;
    printf("Enter the number :  ");
    scanf("%d",&num);
    originalNum = num;
    while (originalNum != 0){
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
     if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}