///Write a program which accept 4 digits number from the user and if it is 4 digits number display its Reverse Number otherwise iterate till user enters 4 digits number.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, rev = 0, digit = 0, count = 0;

    while (1)
    {
        printf("Enter a 4-digit number: ");
        scanf("%d", &num);

        // Count the number of digits
        int tempNum = num;
        count = 0;
        while (tempNum != 0)
        {
            tempNum /= 10;
            count++;
        }

        if (count == 4)
        {
            break;
        }
        else
        {
            printf("Invalid input. Please enter a 4-digit number.\n");
        }
    }

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
