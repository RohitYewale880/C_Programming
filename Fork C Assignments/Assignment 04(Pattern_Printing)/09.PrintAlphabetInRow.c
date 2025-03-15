/*Print A B C D
        A B C D
        A B C D*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, Rcnt = 0, Ccnt = 0;
    char ch = '\0';
    printf("Enter Number Of Row :");
    scanf("%d",&Rcnt);
    printf("Enter Number Of Col :");
    scanf("%d",&Ccnt);

    printf("\n\n");

    for(R = 0; R < Rcnt; R++)
    {
        for(C = 0, ch = 'A'; C < Ccnt; C++, ch++)
        {
           printf(" %c ",ch);
        }
        printf("\n");
    }

    getch();
    return 0;
}
