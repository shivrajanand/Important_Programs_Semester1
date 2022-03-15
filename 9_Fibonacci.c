/* Write a program to display n terms of
fibonacci series where n is input by user*/

#include <stdio.h>

int main()
{
    int n1, n2, num, sum, temp, i = 2;

    printf("How many elements of fibonacci series you want?\n...>");
    scanf("%d", &num);
    n1 = 0;
    n2 = 1;

    if (num == 1)
    {
        printf("Fibonacci Series:\n");
        printf("%d", n1);
    }
    else if (num == 2)
    {
        printf("Fibonacci Series:\n");
        printf("%d, %d", n1, n2);
    }
    else
    {
        printf("Fibonacci Series:\n");
        printf("%d, %d, ", n1, n2);
        do
        {
            sum = n1 + n2;
            printf("%d, ", sum);
            n1 = n2;
            n2 = sum;
            i++;

        } while (i != num);
    }

    return 0;
}