// Task: To swap two numbers input by the user

#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Enter first number: ");
    scanf("%d", &num1); // Input of first number
    printf("Enter second number: ");
    scanf("%d", &num2); // Input of second number
    // Printing numbers before swapping
    printf("num1 = %d, num2 = %d\n", num1, num2);
    // Swapping
    temp = num1;
    num1 = num2;
    num2 = temp;
    // Printing numbers after swapping
    printf("Numbers swapped\n");
    printf("num1 = %d, num2 = %d", num1, num2);
    return 0;
}