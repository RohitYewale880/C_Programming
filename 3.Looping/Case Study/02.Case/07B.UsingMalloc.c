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
    int Cnt = 0;
    struct Stud *StdPtr;

    printf("Enter Count Of Students =>");
    scanf("%d",&Cnt);

    StdPtr = (struct Stud*) malloc (sizeof(struct Stud) * (Cnt));

    printf("\n\nEnter Student Details =>");
    Accept_Student_Details(StdPtr, &Cnt);

    printf("\n\n\nDetails of Student => ");
    Display_Student_Details(StdPtr, &Cnt);

    printf("\n==============================================");
    printf("\n Thanks For Using Our Application....");
    printf("\n==============================================");

    getch();
    return 0;
}


Accept_Student_Details(struct Stud *sPtr, int *sCnt)
{
    int i = 0;

        for(i = 0; i < *sCnt; i++)
    {
        printf("\n\nRoll No is :%d",i+1);
        sPtr[i].Roll_No = i+1;

        printf("\n\nEnter Name : ");
        scanf("%s",sPtr[i].Name);

        fflush(stdin);

        printf("\nEnter Marks In Physics : ");
        scanf("%d",&sPtr[i].Phys);

        printf("\nEnter Marks In Chemistry : ");
        scanf("%d",&sPtr[i].Chem);

        printf("\nEnter Marks In Maths : ");
        scanf("%d",&sPtr[i].Maths);

        sPtr[i].Total = sPtr[i].Phys + sPtr[i].Chem + sPtr[i].Maths;
        sPtr[i].Per = (sPtr[i].Total / 300) * 100;

    }
    return;
}

Display_Student_Details(struct Stud *sPtr, int *SCnt)
{
    int i = 0;

      for(i = 0; i < *SCnt; i++)
    {
        printf("\n==============================================");
        printf("\n Roll No     = %d",sPtr[i].Roll_No);
        printf("\n Name        = %s",sPtr[i].Name);
        printf("\n Total Marks = %f",sPtr[i].Total);
        printf("\n Percentage  = %0.3f",sPtr[i].Per);
        printf("\n==============================================\n\n");
    }
    return;
    getch();
}
