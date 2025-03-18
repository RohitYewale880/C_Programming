#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, Res = 0;

    printf("Enter The number =");
    scanf("%d",&No1);

    printf("\n ==================******==============\n");

    Res = No1 << 5;

    printf("Result = %d << 5 = %d",No1,Res);

    printf("\n================*******=================");

    getch();
    return 0;
}
