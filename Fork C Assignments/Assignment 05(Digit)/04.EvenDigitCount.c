///Write a program which accept number from user and return the count of even digits.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Dig = 0, Temp = 0, Ecnt = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if((Dig != 0) && (Dig % 2 == 0))
        {
           Ecnt++;
        }
        Temp = Temp / 10;
    }
    printf("Even Digit Count In Number %d : %d",Num,Ecnt);
    getch();
    return 0;
}
