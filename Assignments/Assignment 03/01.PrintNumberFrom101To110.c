///Write a program that uses a loop to print the numbers from 101 to 110.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0;

    printf("Numbers form 101 to 110 =>\n\n");

    for(i =  101; i <= 110; i++)
    {
        printf("\n %d ",i);
    }

    getch();
    return 0;
}

