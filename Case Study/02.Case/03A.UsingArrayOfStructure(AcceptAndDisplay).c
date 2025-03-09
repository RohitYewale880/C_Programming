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
    int i = 0;
    struct Stud Std[3]={};

    printf("Enter Student Details =>");

    for(i = 0; i < 3; i++)
    {
        printf("\n\nEnter Roll Number : ");
        scanf("%d",&Std[i].Roll_No);

        printf("\nEnter Name : ");
        scanf("%s",&Std[i].Name);

        fflush(stdin);

        printf("\nEnter Marks In Physics : ");
        scanf("%d",&Std[i].Phys);

        printf("\nEnter Marks In Chemistry : ");
        scanf("%d",&Std[i].Chem);

        printf("\nEnter Marks In Maths : ");
        scanf("%d",&Std[i].Maths);

        Std[i].Total = Std[i].Phys + Std[i].Chem + Std[i].Maths;
        Std[i].Per = (Std[i].Total / 300) * 100;

    }
    printf("\n\n\nDetails of Student => ");
    for(i = 0; i < 3; i++)
    {
        printf("\n==============================================");
        printf("\n Roll_Number = %d",Std[i].Roll_No);
        printf("\n Name        = %s",Std[i].Name);
        printf("\n Total Marks = %f",Std[i].Total);
        printf("\n Percentage  = %0.3f",Std[i].Per);
        printf("\n==============================================\n\n");
    }

    printf("\n Thanks For Using Our Application....");


    getch();
    return 0;
}
