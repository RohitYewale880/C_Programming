///Write the program to count the total digits in the given number.

#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0, dCnt = 0, Temp = 0;

    printf("Enter any number:\n");
    scanf("%d",&Num);

    Temp = Num;

    while (Temp > 0)

    {
        Temp = Temp / 10 ;
        dCnt++;
    }

    printf("The digit count in %d: \n%d",Num,dCnt);
    getch();
    return 0;
}
