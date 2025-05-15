///Write a program that accepts a number from the user, sums its digits, and displays them in the following format.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Dig = 0, Temp = 0, Dsum = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Dsum = Dsum + Dig;
        Temp = Temp / 10;

        printf("%d + ",Dig);
    }
    printf("= %d",Dsum);
    getch();
    return 0;


}
