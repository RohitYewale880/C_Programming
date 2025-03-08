///Write a program to check whether a given year is a leap year.

#include<stdio.h>
#include<conio.h>

int main()
{
    int yr = 0;

    printf("Enter a Year To Check It is Leap or Not : ");
    scanf("%d",&yr);

    if (((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0))
    {
        printf("\n\nThe Given Year %d Is Leap Year",yr);
    }
    else
    {
        printf(\n\nThe Given Year %d Is Not Leap Year",yr);
    }

    getch();
    return 0;
}
