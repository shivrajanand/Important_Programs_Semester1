// To find if number is amstrong or not
/*
A number is called armstrong when it is
equal to the sum of its digits raised to
the power of number of digits

eg 153 = 1^3 + 5^3 + 3^3
       = 1 + 125 + 27
       = 153
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp1, temp2, i = 0, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    // Getting number of digits
    temp1 = num;
    while (temp1 != 0)
    {
        temp1 = temp1 / 10;
        i++;
    }
    temp2 = num;
    // Getting sum of powers
    while (temp2 != 0)
    {
        digit = temp2 % 10;
        sum = sum + pow(digit, i);
        temp2 = temp2 / 10;
    }

    if (sum == num)
    {
        printf("%d is armstrong number", num);
    }
    else
    {
        printf("%d is not armstrong number", num);
    }

    return 0;
}