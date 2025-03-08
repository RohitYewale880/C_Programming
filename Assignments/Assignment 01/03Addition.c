///3.	Create a program to add two numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>

int main()
{

    int N1 = 0, N2 = 0, Sum = 0;

    printf("Enter first Number:");
    scanf("%d",&N1);
    printf("Enter secound Number:");
    scanf("%d",&N2);

    Sum = N1 + N2;

    printf("The sum of two number of %d and %d is   =>%d",N1,N2,Sum);

    getch();
    return 0;

}
