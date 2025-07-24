#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a number =");
    scanf("%d",&No);

    printf("\n =======================*******========================\n");

    if(((No >> 4) & 1) && ((No >> 17) & 1) )
    {
        printf("\n 5th & 18 th bit of given number %d are ON.",No);
    }


    else if((No >> 4)& 1)
        {
            printf("\n For given number %d = 5th bit is ON & 18 th bit is OFF",No);
        }
        else if((No >> 17) & 1)
        {
            printf("\n for given number %d = 5 th bit is OFF & 18 th bit is ON.",No);
        }
        else
        {
            printf("\n both 5 th & 18 th bit Are given number %d is OFF.",No);
        }

        printf("\n=====================************============================\n");

        getch();
        return 0;
}
