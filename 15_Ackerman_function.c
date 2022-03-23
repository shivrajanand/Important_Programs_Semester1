#include <stdio.h>

int ackerman(int m, int n);

int main()
{
    printf("Ackerman value of 1 and 2 is %d", ackerman(1, 2));
    return 0;
}

int ackerman(int m, int n)
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
    // else
    // {
    //     return -12; //This statement will never execute
    // }
}
