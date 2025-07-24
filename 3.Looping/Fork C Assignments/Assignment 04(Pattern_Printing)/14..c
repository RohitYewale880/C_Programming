/*Print      5 25 45
            10 30 50
            15 35 55
            20 40 60  */

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, Rcnt = 0, Ccnt =0, Num = 5;
    char ch1 = 'A', ch2 = 'a';

    printf("Enter Row : ");
    scanf("%d",&Rcnt);

    printf("Enter Column : ");
    scanf("%d",&Ccnt);

    for(C = 1; C <= Ccnt; C++)
    {
        for(R = 1; R <= Rcnt; R++)
        {
            printf("%3d",Num);
            Num += 5;
        }

        printf("\n");
    }

    getch();
    return 0;
}

