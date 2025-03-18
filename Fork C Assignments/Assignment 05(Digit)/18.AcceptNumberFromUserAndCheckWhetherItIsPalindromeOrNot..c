///Write a program which accept number from user and check whether it is Palindrome or not. (Don’t Use reverse variable for storing reverse & don’t reverse given no as well )

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, digit = 0, length = 0, tempNum = 0, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    tempNum = num;

    while (tempNum != 0)
    {
        tempNum /= 10;
        length++;
    }

    divisor = 1;
    for (int i = 1; i < length; i++)
    {
        divisor *= 10;
    }

    int isPalindrome = 1;
    tempNum = num;
    while (tempNum != 0)
    {
        digit = tempNum / divisor;
        if (digit != tempNum % 10)
        {
            isPalindrome = 0;
            break;
        }
        tempNum %= divisor;
        tempNum /= 10;
        divisor /= 100;
    }

    if (isPalindrome)
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
