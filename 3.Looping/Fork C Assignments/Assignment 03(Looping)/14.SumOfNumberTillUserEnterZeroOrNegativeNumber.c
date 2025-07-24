///Write Program to make sum of numbers till user enter zero or negative number.(Use break/continue & unconditional loop).

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0;

    printf("Enter Numbers To Add Or Sum =>\n\n");

    for(;;)
    {
        printf("Number =  ");
        scanf("%d",&No);

        if(No <= 0)
        {
            break;
        }
        else
        {
            Sum += No;
        }
    }

    printf("\n\nSum of Entered Numbers is => %d",Sum);

    getch();
    return 0;
}
