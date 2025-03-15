/*Print A B C D
        E F G H
        I J K L*/

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
    ch = 'A';

    for(R = 0; R < Rcnt; R++)
    {
        for(C = 0; C < Ccnt; C++)
        {
           printf(" %c ",ch);
           ch++;
        }
        printf("\n");
    }

    getch();
    return 0;
}
