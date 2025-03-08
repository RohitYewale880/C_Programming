#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0, Sq = 0;

    printf("Enter Number To Get Square:");
    scanf("%d",&Num);

    Sq = Num * Num;

    printf("Square Of %d is : %d", Num, Sq );
    getch();
    return 0;
}
