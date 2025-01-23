//Even Odd using Ternary using Ternary.


#include<stdio.h>
#include<conio.h>

int main()

{
    int  Number = 0;

    printf("Enter the Number:\n");
    scanf("%d",&Number);

    (Number == 0) ? printf("The Given Number is Neutral.\n") : ((Number % 2 == 0) ? printf("The Given Number is Even.\n") : printf("Given Number is Odd."));

    getch();
}

