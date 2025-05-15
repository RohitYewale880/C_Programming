///Write a program which accept number from user and Display Min digit in it.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, minDigit, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit < minDigit)
        {
            minDigit = digit;
        }
        num /= 10;
    }

    printf("The minimum digit is: %d\n", minDigit);

    getch();
    return 0;
}
