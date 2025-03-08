///Write a program to find the maximum number between two given numbers.

#include<stdio.h>
#include<conio.h>


int main()
{
    int No1 = 0, No2 =0;

    printf("Enter the First Number : ");
    scanf("%d",&No1);
    printf("\n\nEnter the Second Number : ");
    scanf("%d",&No2);

    if(No1 > No2)
    {
        printf("\n\nThe First Number %d is Maximum Number",No1);
    }
    else
    {
        printf("\n\nThe Second Number %d is Maximum Number",No2);
    }

    getch();
    return 0;
}
