///Factorial of the Given Number User.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Fact = 0, Temp =0;

    printf("Enter an any Integer Number :");
    scanf("%d",&Num);

    Temp = Num ;
    Fact = 1;


    while (Temp>=1)
    {
       Fact = Fact * Temp ;
       Temp-- ;

    }

     printf("The Factorial of Given Number %d is : %d",Temp,Fact);


    getch();
    return 0;
}
