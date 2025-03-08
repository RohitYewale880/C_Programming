/*Write a program to accept division of student from user and depends on the division display exam timing.
There are 4 divisions in school as A, B, C, D.
Exam of division A at 10 AM,
Exam of division B at 10.30 AM,
Exam of division C at 1 PM and
Exam of division D at 1.30 PM.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '/0';

    printf("Enter A Division To Check Exam Time : ");
    scanf("%c",&ch);

    switch (ch)

    {
    case 'A':
        printf("\n\nYour Exam  at 10 AM..");
        break;
    case 'a':
        printf("\n\nYour Exam  at 10 AM..");
        break;
    case 'B':
        printf("\n\nYour Exam  at 10.30 AM..");
        break;
    case 'b':
        printf("\n\nYour Exam  at 10.30 AM..");
        break;
    case 'C':
        printf("\n\nYour Exam  at 1 PM..");
        break;
    case 'c':
        printf("\n\nYour Exam  at 1 PM..");
        break;
    case 'D':
        printf("\n\nYour Exam  at 1.30 PM..");
        break;
    case 'd':
        printf("\n\nYour Exam  at 1.30 PM..");
        break;
    default:
        printf("\n\nEnter Correct Division.. ");
    }

    getch();
    return 0;
}
