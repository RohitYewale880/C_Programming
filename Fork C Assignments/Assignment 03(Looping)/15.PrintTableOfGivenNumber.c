///Create a program to print the multiplication table of a given number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 0, Res = 0;

    printf("Table of Number => ");
    scanf("%d",&No);

    printf("\n\n");
    printf("=========================");

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
        Res = (No * Cnt);
        printf("\n%3d * %3d = %3d.",No,Cnt,Res);
    }

    printf("\n=========================");


    getch();
    return 0;
}
