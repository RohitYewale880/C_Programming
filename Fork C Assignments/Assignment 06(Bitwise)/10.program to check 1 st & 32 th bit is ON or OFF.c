#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

int main()
{
    LLI No = 0;

    printf("\n Enter a number=");
    scanf("%d",&No);


    printf("\n ==================******===============\n");


    if((No &1) && ((No >> 31) & 1))
    {
        printf("\n both 1st bit and 32 bit is ON");
    }
    else if(No & 1)
    {
        printf("\n 1 st bit is ON ,Last bit on OFF.");
    }
    else if((No >> 31) & 1)
    {
        printf("\n 32 bit is ON , 1st bit is Off.");
    }
    else
    {
        printf("\n Both Bits Are Off");
    }

    printf("\n================*******==================\n");

    getch();
    return 0;
}
