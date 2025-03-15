///Write Program to print Fibonacci series from 0 to N, Accept N from user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, first = 0, second = 0, next = 0;

    printf("Enter a Number :");
    scanf("%d",&Num);

    printf("\n\nFabonacci series is => ");

    second = 1;
    while(first <= Num)
    {
        printf("%d ",first);

        next = first + second;

        first = second;
        second = next;
    }
    getch();
    return 0;
}
