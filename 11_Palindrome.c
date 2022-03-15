// Check if input number is palindrome or not

#include <stdio.h>

int main()
{
    int num, reverse, temp, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Original Number: %d\n", num);
    printf("Reverse Number: %d", reverse);

    return 0;
}