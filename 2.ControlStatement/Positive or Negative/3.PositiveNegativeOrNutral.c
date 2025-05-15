/// Find the given Number is positive or negative.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0;
    printf("Enter an Integer Number:");
    scanf("%d",&Num);

    if (Num == 0)
    {
        printf("The Given Number is Neutral.");
    }

    else if (Num > 0)
    {
        printf("The Given Number %d is Positive",Num);
    }
    else
    {
        printf("The Given Number %d is Negative",Num);
    }

    getch();
    return 0;
}
