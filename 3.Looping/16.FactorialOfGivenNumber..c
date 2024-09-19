///Factorial of the Given Number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Fact = 0;
    Num = 7;
    Fact = 1;

    while (Num>=1)
    {
       Fact = Fact * Num ;
       Num-- ;

    }

     printf("The Factorial of Given Number 7 is : %d",Fact);




    getch();
    return 0;
}
