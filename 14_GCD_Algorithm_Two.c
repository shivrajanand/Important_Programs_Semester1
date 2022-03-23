#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter first number\n..>");
    scanf("%d", &num1);
    printf("Enter second number\n..>");
    scanf("%d", &num2);

    printf("GCD of %d and %d is %d", num1, num2, gcd(num1, num2));

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    else if (b == 0)
    {
        return a;
    }

    else
    {
        return gcd(b, a % b);
    }
}