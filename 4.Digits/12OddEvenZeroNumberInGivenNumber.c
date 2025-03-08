///Write the program to find the odd, even and zero count in the given number.

#include<stdio.h>
#include<conio.h>

int main ()

{
    int Num = 0, Z_Cnt = 0, E_Cnt = 0, O_Cnt = 0, Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&Num);   /// No = 480701

        Temp = Num;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if(Dig == 0)
            {
                Z_Cnt++;
            }
            else if( Dig % 2 == 0  )
            {
                E_Cnt++;
            }
            else
            {
                O_Cnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n Even Count in Number %d = %d.", Num, E_Cnt);
        printf("\n Odd Count in Number %d  = %d.", Num, O_Cnt);
        printf("\n Zero Count in Number %d = %d.", Num, Z_Cnt);

        getch();
        return 0;
}
