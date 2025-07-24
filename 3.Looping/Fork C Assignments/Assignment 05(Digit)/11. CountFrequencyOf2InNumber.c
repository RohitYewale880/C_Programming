///Write a program which accept number from user and count frequency of 2 in it.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, count = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit == 2)
        {
            count++;
        }
        num /= 10;
    }

    printf("Frequency of digit 2: %d\n", count);

    getch();
    return 0;
}
