///Write a program to swap number using Call_By_Address Function

#include<stdio.h>
#include<conio.h>

int Swap_Num(int*a, int*b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int Num1 = 0, Num2 = 0;

    printf("Enter First Number:");
    scanf("%d",&Num1);
    printf("Enter Second Number:");
    scanf("%d",&Num2);

    printf("\n\nBefore Swapping Number is %d and %d", Num1, Num2);

    Swap_Num(&Num1, &Num2);

    printf("\n\nAfter Swapping Number Becomes %d and %d", Num1, Num2);

    getch();
    return 0;

}
