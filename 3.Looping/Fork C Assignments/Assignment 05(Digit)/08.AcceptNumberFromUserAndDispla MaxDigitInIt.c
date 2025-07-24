///Write a program which accept number from user and Display Max digit in it.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, maxDigit = -1, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit > maxDigit)
        {
            maxDigit = digit;
        }
        num /= 10;
    }

    printf("The maximum digit is: %d\n", maxDigit);

    getch();
    return 0;
}
