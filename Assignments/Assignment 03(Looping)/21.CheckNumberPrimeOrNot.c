///Write to program to check whether a given number is prime or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Num = 0;
    int prime = 1;

    printf("Enter A Number:");
    scanf("%d",&Num);

    if(Num <= 1)
    {
        prime = 0;
    }

    for(i = 2; i < Num; i++)
    {
        if(Num % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime)
    {
        printf("\n\n%d is prime number.",Num);
    }
    else
    {
        printf("\n\n%d is not prime number.",Num);
    }

    getch();
    return 0;
}
