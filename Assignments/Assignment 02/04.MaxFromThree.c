///Write a program to find the maximum number among three given numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>


int main()
{
    int No1 = 0, No2 = 0, No3 = 0;

    printf("Enter the First Number : ");
    scanf("%d",&No1);
    printf("\n\nEnter the Second Number : ");
    scanf("%d",&No2);
    printf("\n\nEnter the Third Number : ");
    scanf("%d",&No3);

    if((No1 > No2) && (No1 > No3))
    {
        printf("\n\nThe First Number %d is Maximum Number",No1);
    }
    else if((No2 > No1) && (No2 > No3))
    {
        printf("\n\nThe Second Number %d is Maximum Number",No2);
    }
    else
    {
        printf("\n\nThe Third Number %d is Maximum Number",No3);
    }

    getch();
    return 0;
}
