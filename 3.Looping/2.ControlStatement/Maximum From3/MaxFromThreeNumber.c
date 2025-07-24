//Max from three numbers.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0, Num2 = 0, Num3 = 0;

    printf("Enter value of Num1:");
    scanf("%d",&Num1);
    printf("Enter value of Num2:");
    scanf("%d",&Num2);
    printf("Enter value of Num3:");
    scanf("%d",&Num3);

    if((Num1>Num2) && (Num1>Num3))
    {
        printf("The Num1 %d is the maximum Number.",Num1);
    }

    else if ((Num2>Num1) && (Num2>Num3))
    {
        printf("The Num2 %d is the maximum Number.",Num2);
    }
    else
    {
        printf("The Num3 %d is the maximum Number.",Num3);
    }
    getch();
    return 0;


}
