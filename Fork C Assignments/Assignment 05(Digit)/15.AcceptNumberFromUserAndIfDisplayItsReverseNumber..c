///Write a program which accept number from user and if display its Reverse Number. (with new variable for storing reverse)

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, rev = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", rev);

    getch();
    return 0;
}
