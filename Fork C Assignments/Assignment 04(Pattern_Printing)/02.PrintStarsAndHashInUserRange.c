///Print * and # In Row And col of user entered number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, Rcnt = 0, Ccnt = 0;
    printf("Enter Number Of Row :");
    scanf("%d",&Rcnt);
    printf("Enter Number Of Col :");
    scanf("%d",&Ccnt);

    printf("\n\n");

    for(R = 0; R < Rcnt; R++)
    {
        for(C = 0; C < Ccnt; C++)
        {
            if(C % 2 == 0)
            {
                printf(" * ");
            }
            else
            {
                printf(" # ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
