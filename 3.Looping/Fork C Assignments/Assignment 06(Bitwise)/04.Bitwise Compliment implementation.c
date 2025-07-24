#include<stdio.h>
#include<conio.h>

int main()
{

    int No1 = 0, Res = 0;

    printf("Enter The Number = ");
    scanf("%d",&No1);

    printf("\n===========*******\n================");

    Res = ~No1;

    printf("Result = ~%d = %d",No1,Res);

    getch();
    return 0;
}
