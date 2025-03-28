/// Version 1 All Activity In Single File...

#include<stdio.h>
#include<conio.h>

void Addition();
void Subtraction();
void Multiply();
void Division();
void Remainder();

void main()
{
    int Choice = 0;
    char ch = '\0';

    while(1)
    {
        printf("\n\t\t******CALCULATER******");

        printf("\n\n======================================================\n\n");
        printf("\n\n\tEnter A Number From Given Choice =>");
        printf("\n\tPress 1 For Addition");
        printf("\n\tPress 2 For Subtraction");
        printf("\n\tPress 3 For Multiplication");
        printf("\n\tPress 4 For Division");
        printf("\n\tPress 5 For Remainder");
        printf("\n\tPress 6 For Exit..");
        printf("\n\n======================================================\n\n");

        printf("\n\tEnter A Number do you have to enter =>  ");
        scanf("%d",&Choice);

        switch (Choice)
        {
            case 1:
                Addition();
                getch();
                system("cls");
                break;

            case 2:
                Subtraction();
                getch();
                system("cls");
                break;

            case 3:
                Multiply();
                getch();
                system("cls");
                break;

            case 4:
                Division();
                getch();
                system("cls");
                break;

            case 5:
                Remainder();
                getch();
                system("cls");
                break;

            case 6:
                printf("\n\n\tDo You Want To Exit In This Application..(Yes/No): ");
                fflush(stdin);
                ch = getchar();
                if((ch == 'Y')||(ch == 'y'))
                {
                    system("cls");
                    goto DWN;
                }

                getch();
                system("cls");
                break;

            default:
                printf("\n\n\tInvalid Credentials....\n\n\Press Enter Go To Back....");
                printf("\n\n======================================================\n\n");
                getch();
                system("cls");
        }
    }

    DWN:
        printf("\n\n======================================================\n\n");
        printf("\************** Thanks To Use CALCULATER **************");
        printf("\n\n======================================================\n\n");

    getch();
    return 0;
}


void Addition()
{
    int N1 = 0, N2 = 0, Sum = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    Sum = N1 + N2;
    printf("\n\nAddition of %d And %d => %d",N1,N2,Sum);
    printf("\n\n======================================================\n\n");
    return;
}

void Subtraction()
{
    int N1 = 0, N2 = 0, sub = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    sub = N1 - N2;
    printf("\n\nSubtraction of %d And %d => %d",N1,N2,sub);
    printf("\n\n======================================================\n\n");

    return;
}

void Multiply()
{
    int N1 = 0, N2 = 0, mul = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    mul = N1 * N2;
    printf("\n\nMultiplication of %d And %d => %d",N1,N2,mul);
    printf("\n\n======================================================\n\n");
    return;
}

void Division()
{
    int N1 = 0, N2 = 0, div = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    div = N1 / N2;
    printf("\n\nDivision of %d And %d => %d",N1,N2,div);
    printf("\n\n======================================================\n\n");
    return;
}

void Remainder()
{
    int N1 = 0, N2 = 0, rem = 0;
    printf("\nEnter First Number : ");
    scanf("%d",&N1);
    printf("\nEnter Second Number : ");
    scanf("%d",&N2);

    rem = N1 % N2;
    printf("\n\Remainder => %d",N1,N2,rem);
    printf("\n\n======================================================\n\n");
    return;
}
