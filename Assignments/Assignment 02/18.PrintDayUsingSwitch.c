///Write a program to accept a day number (1 to 7) and prints the corresponding day of the week (by using switch)

#include<stdio.h>
#include<conio.h>

int  main()
{
    int Day = 0;

    printf("Enter A Number : ");
    scanf("%d",&Day);

    switch (Day)
    {
    case 1:
        printf("\n\nThe Day of This Number is: Sunday");
        break;
    case 2:
        printf("\n\nThe Day of This Number is: Monday");
        break;
    case 3:
        printf("\n\nThe Day of This Number is: Tuesday");
        break;
    case 4:
        printf("\n\nThe Day of This Number is: Wednesday");
        break;
    case 5:
        printf("\n\nThe Day of This Number is: Thursday");
        break;
    case 6:
        printf("\n\nThe Day of This Number is: Friday");
        break;
    case 7:
        printf("\n\nThe Day of This Number is: Saturday");
        break;
    default:
        printf("\n\nInvalid Number...");
    }

    getch();
    return 0;
}
