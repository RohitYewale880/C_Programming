/*22.	Write a program that accepts three numbers from the user and swaps their values such that the
value of the first number goes to the second, the second goes to the third, and the third goes to the first. */

#include<stdio.h>
#include<conio.h>

int main()
{

    int No1 = 0, No2 = 0, No3 = 0;

    printf("Enter First Number:");
    scanf("%d",&No1);
    printf("Enter Second Number:");
    scanf("%d",&No2);
    printf("Enter third Number:");
    scanf("%d",&No3);

    printf(" \n\n After swapping \n Number1 =%d \n Number2 =%d \n Number3 =%d",No3,No1,No2);

    getch();
}
