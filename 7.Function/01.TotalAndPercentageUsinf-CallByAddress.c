///
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Calculate(int, int, int, int*, float*);

int main()
{
    int Phy = 0, Chem = 0, Maths = 0, Total_Marks = 0;
    float Percent = 0.0;

    printf("\n Enter 3 Subjects Marks : ");
    printf("\n Enter Physics Marks: ");
    scanf("%d",&Phy);
    printf("\n Enter Chemistry Marks: ");
    scanf("%d",&Chem);
    printf("\n Enter Maths Marks: ");
    scanf("%d",&Maths);

    Calculate(Phy, Chem, Maths, &Total_Marks, &Percent);


    printf("\n\n Student Report Card..\n");
    printf("\n\n Physics        =%d\n",Phy);
    printf("\n Chemistry      =%d\n",Chem);
    printf("\n Maths          =%d\n",Maths);
    printf("\n\n Total Marks  =%d\n",Total_Marks);
    printf("\n\n Percentage     =%0.2f\n",Percent);

    getch();
    return 0;
}

void Calculate(int P, int C, int M, int *Tot, float *Per)
{
    *Tot = P + C + M;
    *Per = ((float)(*Tot)) / 3 ;
    return;
}
