///Write the program to count of user given number.

#include<stdio.h>
#include<conio.h>

int main ()

{
    int Num = 0, Temp = 0, Dig = 0, Cnt = 0, U_Cnt = 0;

    printf("Enter the Number To count Digit :");
    scanf("%d",&Num);

    printf("Enter the Number to Find :");
    scanf("%d",&U_Cnt);

    Temp = Num;

    while (Temp>0)
    {
        Dig = Temp % 10;

        if(Dig == U_Cnt)
        {
            Cnt++ ;
        }

        Temp = Temp / 10;
    }

    printf("The count of %d in %d is : %d",U_Cnt,Num,Cnt);
    getch();
    return 0;

}
