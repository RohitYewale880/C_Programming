///Factorial of the Given Number-For

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Fact = 0;

    for (Num= 7, Fact = 1; Num>=1; Num--)
    {
       Fact = Fact * Num ;

    }

     printf("The Factorial of Given Number 7 is : %d",Fact);




    getch();
    return 0;
}
