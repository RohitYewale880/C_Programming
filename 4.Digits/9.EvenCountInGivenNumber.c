///Write the program to calculate the even count in the given number.

#include<stdio.h>
#include<conio.h>

int main ()

{
    int Num = 0, Dig = 0, E_Cnt = 0, Temp = 0;

    printf("Enter the any number:");
    scanf("%d",&Num);

    Temp = Num;

    while (Temp>0)
    {
        Dig = Temp % 10;
        if ((Dig % 2 == 0) && (Dig != 0))
        {
            E_Cnt++ ;
        }

        Temp = Temp / 10;
    }
       printf("The Even Count present in the given Number %d is : %d",Num,E_Cnt);

       getch();
       return 0 ;
}
