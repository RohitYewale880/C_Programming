///Write a program which accept number from user and if display its Reverse Number. (In place reverse don’t use reverse as separate variable)

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: ");
    while (num != 0)
    {
        digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }

    printf("\n");

    getch();
    return 0;
}
