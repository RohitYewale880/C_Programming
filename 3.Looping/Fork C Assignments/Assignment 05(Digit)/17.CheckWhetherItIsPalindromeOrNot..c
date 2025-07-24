///Write a program which accept number from user and check whether it is Palindrome or not. (use a separate reverse variable to compare)

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, rev = 0, originalNum = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (rev == originalNum)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }

    getch();
    return 0;
}
