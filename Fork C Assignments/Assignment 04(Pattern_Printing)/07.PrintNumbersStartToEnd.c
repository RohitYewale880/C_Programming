/*Print 1 2 3 4
        5 6 7 8
        9 10 11 12*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, Rcnt = 0, Ccnt = 0, Num = 0;
    printf("Enter Number Of Row :");
    scanf("%d",&Rcnt);
    printf("Enter Number Of Col :");
    scanf("%d",&Ccnt);

    printf("\n\n");
    Num = 1;

    for(R = 0; R < Rcnt; R++)
    {
        for(C = 0; C < Ccnt; C++)
        {
           printf(" %d ",Num);
           Num++;
        }
        printf("\n");
    }

    getch();
    return 0;
}
