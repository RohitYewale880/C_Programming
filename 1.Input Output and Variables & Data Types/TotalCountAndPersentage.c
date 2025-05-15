///Write a program to accept marks of 3 subjects and calculate and display total and percentage.
#include<stdio.h>
#include<conio.h>

int main()

{
    float Sub1 = 0.0, Sub2 = 0.0, Sub3 = 0.0, Total = 0.0;
    float Per = 0.0;

        printf("Marks of Subject1:");
        scanf("%f",&Sub1);
        printf("Marks of Subject2:");
        scanf("%f",&Sub2);
        printf("Marks of Subject3:");
        scanf("%f",&Sub3);

        Total = Sub1 + Sub2 +Sub3;
        Per = Total * 100/300;      /// Per = Total / 3

        printf("Total Marks:%0.2f",Total);
        printf(",Percentage:%.2f",Per);

        getch();

}
