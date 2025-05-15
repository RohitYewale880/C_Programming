#include<stdio.h>
#include<conio.h>
typedef long long int LLI;


LLI OFF_7th_Bit(LLI);

int main()
{
    LLI No = 0, Ret = 0;

    printf("\n Enter a number = ");
    scanf("%d",&No);

    printf("\n =================********====================\n");

    Ret = OFF_7th_Bit(No);

    if(Ret == No)
    {
        printf("\n 7 th bit of given number %lld is already OFF.",No);
    }
    else
    {
        printf("\n 7th bit of given number  %11d is On,\nAfter 7 th Bit OFF Modified number is = %lld.",No,Ret);
    }

    printf("\n ======================********==========================\n");

    getch();
    return 0;


}

LLI OFF_7th_Bit(LLI Num)
{
    if((Num >> 6) & 1)
    {
        Num = ((Num) ^ (1 << 6));
    }
    return Num;
}
