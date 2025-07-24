///Write the program to count zero in the given number.

#include<stdio.h>
#include<conio.h>

int  main ()

{
    int Num = 0, Temp = 0, zCnt = 0, Dig = 0;

    printf("Enter any Number:\n");
    scanf("%d",&Num);

    Temp = Num;

    while (Temp > 0)
    {

        Dig = Temp % 10;

        if (Dig == 0)
        {
            zCnt++ ;
        }
        Temp = Temp /10;

    }

    printf("Zero Count in %d is :\n%d",Num,zCnt);

    getch();
    return 0;
}
