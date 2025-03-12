///Student Information For Admission

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Accept_Student_Details();
void Display_Student_Details();

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
    int i = 0, Cnt = 0;
    struct Stud *StdPtr;

    printf("Enter Count Of Students =>");
    scanf("%d",&Cnt);

    StdPtr = (struct Stud*) malloc (sizeof(struct Stud) * (Cnt));

    printf("\n\nEnter Student Details =>");

    for(i = 0; i < Cnt; i++)
    {
        Accept_Student_Details(&StdPtr[i]);
    }

    printf("\n\n\nDetails of Student => ");
    for(i = 0; i < Cnt; i++)
    {
        Display_Student_Details(&StdPtr[i]);
    }
    printf("\n==============================================");
    printf("\n Thanks For Using Our Application....");
    printf("\n==============================================");

    getch();
    return 0;
}


Accept_Student_Details(struct Stud *sPtr)
{
        printf("\n\nEnter Roll Number : ");
        scanf("%d",&sPtr->Roll_No);

        printf("\nEnter Name : ");
        scanf("%s",&sPtr->Name);

        fflush(stdin);

        printf("\nEnter Marks In Physics : ");
        scanf("%d",&sPtr->Phys);

        printf("\nEnter Marks In Chemistry : ");
        scanf("%d",&sPtr->Chem);

        printf("\nEnter Marks In Maths : ");
        scanf("%d",&sPtr->Maths);

        sPtr->Total = sPtr->Phys + sPtr->Chem + sPtr->Maths;
        sPtr->Per = (sPtr->Total / 300) * 100;

        return;
}

Display_Student_Details(struct Stud *sPtr)
{
        printf("\n==============================================");
        printf("\n Roll_Number = %d",sPtr->Roll_No);
        printf("\n Name        = %s",sPtr->Name);
        printf("\n Total Marks = %f",sPtr->Total);
        printf("\n Percentage  = %0.3f",sPtr->Per);
        printf("\n==============================================\n\n");
        return;
        getch();


}
