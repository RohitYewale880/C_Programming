///Write the program to revers the given number

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0, rvs = 0, Dig = 0, Temp = 0;

    printf ("Enter number to reverse it:\n");
    scanf ("%d",&Num);

    Temp = Num;

     while (Temp > 0)
   {
            Dig = Temp % 10;

            rvs = (rvs * 10) + Dig;

            Temp = Temp / 10;
        }

        printf ("reverse of %d is:\n%d",Num,rvs);

        getch();
        return 0;

}


