///Write Program to find minimum & maximum no. from 10 inputted numbers.


#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, Max, Min;

    printf("Enter Number 1: ");
    scanf("%d", &No);

    Max = Min = No;

    for(i = 2; i <= 10; i++) {
        printf("Enter Number %d: ", i);
        scanf("%d", &No);

        if(No > Max) {
            Max = No;
        }

        if(No < Min) {
            Min = No;
        }
    }

    printf("\nMaximum Number Is => %d", Max);
    printf("\nMinimum Number Is => %d", Min);

    getch();
    return 0;
}
