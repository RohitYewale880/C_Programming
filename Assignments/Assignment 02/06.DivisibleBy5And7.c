///Write a program to accept a number from the user and check whether it is divisible by 5 and 7 or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    printf("Enter The Number To Check Divisible by 5 And 7 : ");
    scanf("%d",&No);

    if((No % 7 == 0) && (No % 5 == 0))
    {
        printf("\n\nThe Given Number Is Divisible By 5 And 7");
    }
    else
    {
        printf("\n\nThe Given Number Is Not Divisible By 5 And 7");
    }

    getch();
    return 0;
}
