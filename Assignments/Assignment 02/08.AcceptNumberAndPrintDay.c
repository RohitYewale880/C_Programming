///Write a program that accepts a day number (1 to 7) and prints the corresponding day of the week.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;
    printf("Enter A Number To Find the Corresponding day : ");
    scanf("%d",&Num);

    if(Num == 1)
    {
        printf("\n\nThe Day Of Week is : Sunday");
    }
    else if(Num == 2)
    {
        printf("\n\nThe Day Of Week is : Monday");
    }
    else if(Num == 3)
    {
        printf("\n\nThe Day Of Week is : Tuesday");
    }
    else if(Num == 4)
    {
        printf("\n\nThe Day Of Week is : Wednesday");
    }
    else if(Num == 5)
    {
        printf("\n\nThe Day Of Week is : Thursday");
    }
    else if(Num == 6)
    {
        printf("\n\nThe Day Of Week is : Friday");
    }
    else if(Num == 7)
    {
        printf("\n\nThe Day Of Week is : Saturday");
    }
    else
    {
        printf("\n\nEnter the Number In Range 1 to 7");
    }

    getch();
    return 0;
}
