// Task: To reverse a number input by user

#include <stdio.h>

int main()
{
    int num, temp, reverse, digit;
    printf("Enter number: ");
    scanf("%d", &num); // Input of number

    temp = num; // storing number in a temporary variable

    while (temp != 0)
    {
        digit = temp % 10;              // extracting digit of number
        reverse = reverse * 10 + digit; // creating reverse number
        temp = temp / 10;               // altering original number for next loop
    }

    printf("Orignal number = %d\n", num);
    printf("Reverse number = %d", reverse);
    return 0;
}