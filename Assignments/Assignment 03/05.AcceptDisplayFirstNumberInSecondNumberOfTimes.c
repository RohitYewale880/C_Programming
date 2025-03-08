
///Write a program which accept two numbers from user and display first number in second number of times.


#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No1 = 0, No2 = 0;

    printf("Enter First Number: ");
    scanf("%d",&No1);
    printf("\nEnter Second Number To Print First Number That Times: ");
    scanf("%d",&No2);

    printf("\n");

    for(i = 1; i <= No2; i++)
    {
        printf("%d ",No1);
    }

    getch();
    return 0;
}

