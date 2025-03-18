///Write a program which accept number from user and return the count of Even, Odd, Zeros digits.(Use Loop Once)

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Dig = 0, Temp = 0, Ocnt = 0, Ecnt = 0, Zcnt = 0;

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
        if(Dig % 2 != 0 )
        {
           Ocnt++;
        }
        if(Dig == 0)
        {
            Zcnt++;
        }
        Temp = Temp / 10;
    }

    printf("\nEven Digit Count In Number %d : %d",Num,Ecnt);
    printf("\nOdd Digit Count In Number %d : %d",Num,Ocnt);
    printf("\nZero Digit Count In Number %d : %d",Num,Zcnt);


    getch();
    return 0;
}

