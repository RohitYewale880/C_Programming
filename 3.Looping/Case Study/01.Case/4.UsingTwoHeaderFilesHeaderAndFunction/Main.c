#include"Header.h"
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
