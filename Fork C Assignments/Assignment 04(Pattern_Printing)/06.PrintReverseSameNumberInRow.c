/*Print 3 3 3 3
        2 2 2 2
        1 1 1 1  */

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

    for(R = 0, Num = Rcnt; R < Rcnt; R++, Num--)
    {
        for(C = 0; C < Ccnt; C++)
        {
           printf(" %d ",Num);
        }

        printf("\n");
    }

    getch();
    return 0;
}
