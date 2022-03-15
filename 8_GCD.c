// To find GCD of two given numbers

#include <stdio.h>

int main()
{
    int num1, num2, rem, divisor, dividend;
    printf("Enter first number: ");
    scanf("%d", &num1); // Input of first number
    printf("Enter second number: ");
    scanf("%d", &num2); // Input of second number

    if (num1 > num2) // Maximum of numbers will be initial dividend
    {
        dividend = num1;
        divisor = num2;
    }
    else
    {
        dividend = num2;
        divisor = num1;
    }

    do // Applying the continuous division technique
    {
        rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;

    } while (rem != 0);

    printf("GCD of %d and %d is %d", num1, num2, dividend);
    return 0;
}