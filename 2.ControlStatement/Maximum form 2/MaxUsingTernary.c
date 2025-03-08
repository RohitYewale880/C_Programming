/// Maximum From 2 Numbers - Using if else.C ternary

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1,Num2;
    up :
    printf("Enter 1st Numbers:");
    scanf("%d",&Num1);
    printf("Enter 2nd Numbers:");
    scanf("%d",&Num2);

    if(Num1 == Num2)
    {
        printf("Both Numbers are Equals.\n Try Other Numbers:\n");
        goto up;

    }


    (Num1>Num2) ? printf("The Num1 is Maximum.\n",Num1): printf("The Num2 is Maximum.\n",Num1);

    {
         printf("Thanks to use...");
    }

        getch();

}

