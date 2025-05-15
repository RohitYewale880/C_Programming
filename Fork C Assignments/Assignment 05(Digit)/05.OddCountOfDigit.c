///Write a program which accept number from user and return the count of odd digits.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Dig = 0, Temp = 0, Ocnt = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig % 2 != 0 )
        {
           Ocnt++;
        }
        Temp = Temp / 10;
    }
    printf("Odd Digit Count In Number %d : %d",Num,Ocnt);
    getch();
    return 0;
}
