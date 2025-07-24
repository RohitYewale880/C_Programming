#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[50];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};

void Accept_Student_Details(struct Stud* sPtr,int Cnt);
void Display_Student_Details(struct Stud* sPtr,int Cnt);
void Search_Student_Details(struct Stud* sPtr, int);
void Create_Batch(struct Stud** sPtr);

static int Cnt = 0;
int main()
{
    int Choice=0,RNo =0;
    char ch ='\0';
    struct Stud *Stdptr= NULL;

     Create_Batch(&Stdptr);

    up:
    printf("\n****************************Enter Choice Number.*********************************");
    printf("\n1.Acccept Student Details.\n2.Display Student Details.\n3.Search Student Details.\n4.Exit\n");
    scanf("%d",&Choice);

    switch(Choice)
    {
    case 1:

        Accept_Student_Details(Stdptr,Cnt);
        system("cls");

        goto up;
        break;

    case 2:

        Display_Student_Details(Stdptr,Cnt);
        system("cls");

        goto up;
        break;

    case 3:
        printf("\n Enter Student Roll No To Search = ");
        scanf("%d", &RNo);

        Search_Student_Details(Stdptr, RNo);
        system("cls");

        goto up;
        break;

    case 4:

        printf("\n Are You Sure?? \n Do You Want To Exit??? (YES / NO) : ");

        fflush(stdin);

        ch = getchar();

        if(ch == 'y' || ch == 'Y')
        {
            goto quit;
        }

        fflush(stdin);
        system("cls");
        goto up;
        break;

        default :

        printf("\n\n Invalid Input Please Select Valid Choice.");
        printf("\n Press Any Key To Continue ");

        getch();
        system("cls");

        goto up;
        break;

    }
    quit:

    printf("\n Thanks For Using Our Application !!");
    getch();
    return 0;

}
void Create_Batch(struct Stud** sPPtr)
{
    printf("\n Enter How Many Students = ");
            scanf("%d", &Cnt);

            *sPPtr = (struct Stud*)malloc(Cnt * sizeof(struct Stud));

            return;
}
void Accept_Student_Details(struct Stud* sPtr,int Cnt)
{
    for(int i=0; i<Cnt; i++)
    {
            printf("\n Enter Student Details :%d",i+101);
            sPtr[i].Roll_No = i+101;

            fflush(stdin);

            printf("\n Enter Student Name : ");
            fflush(stdin);
            gets(sPtr[i].Name);

            printf("\n Enter Physics Marks : ");
            scanf("%d", &sPtr[i].Phy);

            printf("\n Enter Chemistry Marks : ");
            scanf("%d", &sPtr[i].Chem);

            printf("\n Enter Mathematics Marks : ");
            scanf("%d", &sPtr[i].Maths);

            sPtr[i].Total = sPtr[i].Phy + sPtr[i].Chem + sPtr[i].Maths;

            sPtr[i].Per = (sPtr[i].Total / 3);
            getch();
    }
            return;
}
void Display_Student_Details(struct Stud* sPtr,int Cnt)
{
    printf("==========================You Entered Student Details Are Here =============================\n");

    for(int i=0;i<Cnt;i++)
    {
            printf("\n\t\t Roll Number       = %d", sPtr[i].Roll_No);
            printf("\n\t\t Student Name      = %s", sPtr[i].Name);
            printf("\n\t\t Physics Marks     = %d", sPtr[i].Phy);
            printf("\n\t\t Chemistry Marks   = %d", sPtr[i].Chem);
            printf("\n\t\t Mathematics Marks = %d", sPtr[i].Maths);
            printf("\n\t\t Total Marks       = %0.0f", sPtr[i].Total);
            printf("\n\t\t Percentage        = %0.3f", sPtr[i].Per);

            printf("\n\n =====================Thank You======================= ");

            getch();
    }
            return;
}
void Search_Student_Details(struct Stud* sPtr, int RNo)
{

     int i = 0;

        for(i = 0; i < Cnt; i++)
        {
            if(sPtr[i].Roll_No == RNo)
            {
                printf("\n ==================*****======================= ");

                printf("\n\n Searched Student Details =>\n ", i+1);
                printf("\n\t\t Roll Number       = %d", sPtr[i].Roll_No);
                printf("\n\t\t Student Name      = %s", sPtr[i].Name);
                printf("\n\t\t Physics Marks     = %d", sPtr[i].Phy);
                printf("\n\t\t Chemistry Marks   = %d", sPtr[i].Chem);
                printf("\n\t\t Mathematics Marks = %d", sPtr[i].Maths);
                printf("\n\t\t Total Marks       = %0.0f", sPtr[i].Total);
                printf("\n\t\t Percentage        = %0.3f", sPtr[i].Per);

                printf("\n\n ==================*****======================= ");

                break;
            }
        }

        if(i == Cnt)
        {
            printf("\n No Such Student Found!!!");
        }

        getch();
        return;
}
