// Task: to get the sum of digits of a number given

#include <stdio.h>

int main()
{
    int num, temp, digit, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num); // Input number

    temp = num; // Storing number in temp variable

    while (temp != 0)
    {
        digit = temp % 10; // Extractig digits
        sum = sum + digit; // Updating sum
        temp = temp / 10;  // Altering number
    }

    printf("Sum of digits of %d is %d", num, sum);

    return 0;
}