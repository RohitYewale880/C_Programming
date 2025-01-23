///Print Table In Users Range.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, Sp = 0, Ep = 0;

    printf("Enter Start Number:");
    scanf("%d",&Sp);
    printf("Enter End Number:");
    scanf("%d",&Ep);

    printf("The Table in Range %d to %d is:\n\n",Sp,Ep);

    for ( R = 1; R<=10; R++)
    {
        for (C = Sp; C<=Ep; C++)
        {
            R*C;
            printf("%3d ",R*C);
        }
        printf("\n");
    }

    getch();
    return 0;
}

