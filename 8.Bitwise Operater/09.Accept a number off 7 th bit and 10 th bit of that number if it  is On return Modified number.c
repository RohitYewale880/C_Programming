#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

int main()
{
     int B = 0;
     LLI No = 0, Ret =0;

     printf("\n enter a number = ");
     scanf("%lld",&No);

     Up printf("\n Enter a Bit number to OFF = ");
     scanf("\n%d",&B);

     if(B > 32 || B < 1)
     {
         printf("\n INVALID BIT VALUE");
     }

     printf("\n=================*******======================\n");

     Ret = OFF_Any_Bit(No,B);
     printf("\n Given number %d ")

}
