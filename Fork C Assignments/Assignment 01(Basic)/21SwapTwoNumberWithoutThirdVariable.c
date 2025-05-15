///21.	Write a program that accepts two numbers from the user and swaps their values.  (Without using a third variable)

#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0, N2 = 0;

    printf("Enter First Number:");
    scanf("%d",&N1);
    printf("Enter Second Number:");
    scanf("%d",&N2);

    printf("Number After Swapping Number1 = %d And Number2 = %d",N2,N1);
    getch();
    return 0;
}
