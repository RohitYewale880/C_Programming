///Write a program which accept number from user and check whether it contains 2 in it or not.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, found = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit == 2)
        {
            found = 1;
            break;
        }
        num /= 10;
    }

    if (found)
    {
        printf("The number contains 2.\n");
    }
    else
    {
        printf("The number does not contain 2.\n");
    }

    getch();
    return 0;
}
