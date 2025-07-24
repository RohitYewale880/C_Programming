#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0;

    printf("Enter a number =");
    scanf("%d",&No);


    printf("\n====================******======================\n");

    if((No >> 6) & 1)
    {
        printf("\n 7 th bit -");
    }
    if((No >> 7) & 1)
    {
        printf("\n 8 th bit -");
    }
    if((No >> 8) & 1)
    {
        printf("\n 9 th bit - ");

    }
    printf("of given number %d   bit is ON",No);



    printf("\n ==================*******==================\n");


    getch();
    return 0;

}
