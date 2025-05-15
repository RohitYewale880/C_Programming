/*Print      2  4  6  8
            10 12 14 16
            18 20 22 24
            26 28 30 32 */

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, Rcnt = 0, Ccnt =0, Num = 2;

    printf("Enter Row : ");
    scanf("%d",&Rcnt);

    printf("Enter Column : ");
    scanf("%d",&Ccnt);

    for(R = 1; R <= Rcnt; R++)
    {
        for(C = 1; C <= Ccnt; C++)
        {
             printf("%3d",Num);
             Num += 2;
        }

        printf("\n");
    }

    getch();
    return 0;
}

