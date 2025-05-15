/// Print Table Of 7..

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 7, Cnt = 1;

    printf("\n Table of %d is => \n", Num);

    while (Cnt <=10)
    {
        printf(" %3d * %3d = %3d \n",Num, Cnt, (Num *Cnt));
        Cnt++;
    }
    getch();
    return 0;
}
