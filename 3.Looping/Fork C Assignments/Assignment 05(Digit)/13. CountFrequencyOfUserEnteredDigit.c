///Write a program which accept number from user and check whether it contains 2 in it or not.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, count = 0, digit = 0, searchDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to count: ");
    scanf("%d", &searchDigit);

    while (num != 0)
    {
        digit = num % 10;
        if (digit == searchDigit)
        {
            count++;
        }
        num /= 10;
    }

    printf("The digit %d appears %d times.\n", searchDigit, count);

    getch();
    return 0;
}
