
#include<stdio.h>
#include<conio.h>

int main ()

{
        int Num = 0, Cnt = 0, Dig = 0, S_Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&Num);   /// No = 480701

        printf("\n\n Enter a Digit : ");
        scanf("%d",&Search_Dig);

        Temp = Num;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if(Dig == Search_Dig)
            {
                Cnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n %d Digit Count in Given Number %d = %d Times.", Search_Dig, Num, Cnt);

        _getch();
        return 0;
}
