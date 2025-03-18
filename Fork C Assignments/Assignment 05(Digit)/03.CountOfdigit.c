///Write a program which accept number from user and return the count of digits.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Dig = 0, Temp = 0, Dcnt = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Dcnt++;
        Temp = Temp / 10;
    }
    printf("Number of digit In %d is : %d",Num,Dcnt);
    getch();
    return 0;
}

