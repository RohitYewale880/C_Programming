///Factorial of the Given Number User.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Fact = 0, Temp =0;

    printf("Enter an any Integer Number :");
    scanf("%d",&Num);

    for ( Temp = Num , Fact = 1; Temp>=1 ; Temp--)
    {
       Fact = Fact * Temp ;

    }

     printf("The Factorial of Given Number %d is : %d",Temp,Fact);


    getch();
    return 0;
}
