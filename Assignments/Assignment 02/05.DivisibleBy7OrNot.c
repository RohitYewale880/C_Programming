///Write a program to accept a number from the user and check whether it is divisible by 7, then display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    printf("Enter The Number To Check Divisible by 7 :");
    scanf("%d",&No);

    if(No % 7 == 0)
    {
        printf("\n\nThe Given Number Is Divisible By 7");
    }
    else
    {
        printf("\n\nThe Given Number Is Not Divisible By 7");
    }

    getch();
    return 0;
}
