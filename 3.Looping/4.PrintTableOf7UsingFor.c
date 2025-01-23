/// Print Table Of 7.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0, Cnt = 0;
    printf("\n Table of 7 is => \n", Num);

    for (Num =7 , Cnt = 1; Cnt <=10; Cnt++)
    {
        printf(" %3d * %3d = %3d \n",Num, Cnt, (Num *Cnt));
    }
    getch();
    return 0;
}
