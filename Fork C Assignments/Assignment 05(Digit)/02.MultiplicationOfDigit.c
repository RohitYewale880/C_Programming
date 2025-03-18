///Write a program which accept number from user and return multiplication of all digits.


#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Dig = 0, Temp = 0, Dmul = 1;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Dmul = Dmul * Dig;
        Temp = Temp / 10;
    }
    printf("Multiplication of digit is : %d",Dmul);
    getch();
    return 0;


}
