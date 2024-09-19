//Write a program to accept marks of 3 subjects and calculate and display total and percentage.
#include<stdio.h>
#include<conio.h>

int main()

{
    float Sub1, Sub2, Sub3, Total=0;
    float Per=0;

        printf("Marks of Subject1:");
        scanf("%f",&Sub1);
        printf("Marks of Subject2:");
        scanf("%f",&Sub2);
        printf("Marks of Subject3:");
        scanf("%f",&Sub3);

        Total=Sub1+Sub2+Sub3;
        Per=Total*100/300;

        printf("Total Marks:%f",Total);
        printf(",Percentage:%.2f",Per);

        getch();

}
