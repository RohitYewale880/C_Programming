///switch - Day Number to Day - int DataType

#include<stdio.h>
#include<conio.h>

int main()

{
    int Day = 0;
    printf("Enter the Day Number : ");
    scanf("%d",&Day);
    getch();

     switch( Day )
                {
                        case 1:
                                        printf("\n Its Monday");
                                        break;
                        case  2:
                                        printf("\n Its Tuesday");
                                        break;
                        case  3:
                                        printf("\n Its Wednesday");
                                        break;
                        case  4:
                                        printf("\n Its Thursday");
                                        break;
                        case  5:
                                        printf("\n Its Friday");
                                        break;
                        case  6:
                                        printf("\n Its Saturday");
                                        break;
                        case  7:
                                        printf("\n Its Sunday");
                                        break;
                        default :
                                        printf("\n Invalid Day!!!");
                                        break;
                }
                getch();
                return;
}
