///Write program to accept numbers from user as x and y and print x^y.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, res = 0, x = 0, y = 0;

    printf("Enter Value of x :");
    scanf("%d",&x);
    printf("Enter Value of y :");
    scanf("%d",&y);

    for(i = 1, res = 1; i <= y; i++)
    {
        res = res * x;
    }

    printf("\n\n %d^%d = %d",x,y,res);

    getch();
    return 0;
}
