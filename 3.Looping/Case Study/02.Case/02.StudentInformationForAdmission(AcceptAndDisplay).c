///Student Information For Admission

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Stud
{
    int Roll_No;
    char Name[40];
    int Phys;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct Stud Std;

    printf("Enter Student Details =>");
    printf("\n\nEnter Roll Number : ");
    scanf("%d",&Std.Roll_No);

    printf("\nEnter Name : ");
    scanf("%s",&Std.Name);

    fflush(stdin);

    printf("\nEnter Marks In Physics : ");
    scanf("%d",&Std.Phys);

    printf("\nEnter Marks In Chemistry : ");
    scanf("%d",&Std.Chem);

    printf("\nEnter Marks In Maths : ");
    scanf("%d",&Std.Maths);

    Std.Total = Std.Phys + Std.Chem + Std.Maths;
    Std.Per = (Std.Total / 300) * 100;

    printf("\n==============================================");
    printf("\n Roll_Number = %d",Std.Roll_No);
    printf("\n Name        = %s",Std.Name);
    printf("\n Total Marks = %f",Std.Total);
    printf("\n Percentage  = %0.3f",Std.Per);
    printf("\n==============================================\n\n");

    printf("\n Thanks For Using Our Application....");

    getch();
    return 0;
}
