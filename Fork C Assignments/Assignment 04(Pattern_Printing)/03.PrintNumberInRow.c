/*Print 1 2 3 4
        1 2 3 4
        1 2 3 4  */

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

    for(R = 0; R < Rcnt; R++)
    {
        for(C = 0, Num = 1; C < Ccnt; C++, Num++)
        {
           printf(" %d ",Num);
        }

        printf("\n");
    }

    getch();
    return 0;
}
