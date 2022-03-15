// Check if number input by user is prime

#include <stdio.h>

int main()
{
    int num, i, flag = 0;
    printf("Input number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime", num);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime", num);
    }

    return 0;
}

// Possible code optimizations
/*
1.  If a number N is composite it must have a factor
    between 2 to N/2

2.  All prime numbers except 2 can be represented in
    form of 6n+1 or 6n-1
*/