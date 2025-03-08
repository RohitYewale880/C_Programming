///Sum of digits in given number.

#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0, dsum = 0, Dig = 0;

    printf ("Enter Any Number for digit count:");
    scanf("%d",&No);

    while (No > 0 )
    {
        Dig = No % 10;
        dsum = dsum + Dig ;
        No = No / 10;

    }

    printf("The sum of Digits of is :%d",dsum);
    getch();
    return 0;
}
