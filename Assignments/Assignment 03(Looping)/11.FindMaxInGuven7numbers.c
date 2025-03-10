///Write Program to find maximum no. from 7 inputted numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, Max = 0;

    for(i = 1; i <= 7; i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%d",&No);

        if(No > Max)
        {
            Max = No;
        }
    }

    printf("\n\nMaximum Number Is => %d",Max);

    getch();
    return 0;

}
