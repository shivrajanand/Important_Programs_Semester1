#include <stdio.h>

int ackerman(int m, int n); // Function declaration

int main()
{
    int num1, num2, result;
    printf("Enter first number\n...>");
    scanf("%d", &num1);
    printf("Enter second number\n...>");
    scanf("%d", &num2);

    result = ackerman(num1, num2); // Function calling

    printf("Ackerman value is %d", result);
    return 0;
}

int ackerman(int m, int n) // Function definition
{
    if (m == 0)
    {
        return (n + 1);
    }
    else if (m != 0 && n == 0)
    {
        return ackerman(m - 1, 1);
    }
    else if (m != 0 && n != 0)
    {
        return ackerman(m - 1, ackerman(m, n - 1));
    }
    else
    {
        return -12; // This statement will never execute
    }
}
