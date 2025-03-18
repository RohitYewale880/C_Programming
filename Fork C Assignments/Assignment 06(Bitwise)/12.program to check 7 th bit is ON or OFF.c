#include<stdio.h>
#include<conio.h>
int main()
{

    int No = 0;

    printf("Enter a number = ");
    scanf("%d",&No);

    printf("\n ================*****==============\n");


    if((No >> 6) & 1)
    {
        printf("\n 7 th bit of given number %d is ON.",No);
    }
    else
    {
        printf("\n 7 th bit of given number %d is OFF.",No);
    }
    printf("\n ==================*****=================\n");

    getch();
    return 0;
}
