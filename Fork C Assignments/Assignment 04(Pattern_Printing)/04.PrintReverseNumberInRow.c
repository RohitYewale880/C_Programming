/*Print 4 3 2 1
        4 3 2 1
        4 3 2 1  */

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
        for(C = 0, Num = Ccnt; C < Ccnt; C++, Num--)
        {
           printf(" %d ",Num);
        }

        printf("\n");
    }

    getch();
    return 0;
}
