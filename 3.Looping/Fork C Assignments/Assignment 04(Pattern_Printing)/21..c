/* A
   A B
   A B C
   A B C D  */

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, R = 0, C = 0;

    printf("Enter Number : ");
    scanf("%d",&Num);

    for(R = 1 ; R <= Num; R++)
     {
        char ch = 'A';
        for(C = 1; C <= R; C++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");

    }

    getch();
    return 0;
}
