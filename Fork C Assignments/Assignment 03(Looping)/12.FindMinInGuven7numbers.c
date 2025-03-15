///Write Program to find minimum no. from 7 inputted numbers.


#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, Min;  ///Min Do Not assign With 0 For 1st Num Is Initialize With Min,

    for(i = 1; i <= 7; i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%d",&No);

        if(No < Min)
        {
            Min = No;
        }
    }

    printf("\n\nMinimum Number Is => %d",Min);

    getch();
    return 0;

}
