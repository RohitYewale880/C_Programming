///Write a program to print the letters from H to N using a loop. (forward, fixed range)


#include<stdio.h>
#include<conio.h>

void main()
{
    char ch = '/0';

    printf("Letters form H To N =>");

    for(ch ='H';ch<='N';ch++)
    {
        printf("\n  %c",ch);
    }

    getch();
    return 0;
}
