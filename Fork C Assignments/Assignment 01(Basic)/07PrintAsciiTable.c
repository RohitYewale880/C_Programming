///Write Program to print ASCII table (0-127)


#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    printf("\n ASCII table is => \n\n");

    for(i = 0; i <= 127; i++)
    {
        printf("\n %3d  =  %c.", i,i);
    }

    printf("\n ============*****=============");

    getch();
    return 0;
}
