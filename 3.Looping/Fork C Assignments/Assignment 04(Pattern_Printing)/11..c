/*Print A B C D
        a b c d
        A B C D
        a b c d */

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, Rcnt = 0, Ccnt = 0;
    char ch1 = '\0', ch2 ='\0';
    printf("Enter Number Of Row :");
    scanf("%d",&Rcnt);
    printf("Enter Number Of Col :");
    scanf("%d",&Ccnt);

    printf("\n\n");

    ch1 = 'A';
    ch2 = 'a';
    for(R = 0; R < Rcnt; R++)
    {
        if(R % 2 != 0)
            {
                for(C = 0; C < Ccnt; C++)
                {
                    printf(" %c ",ch1);
                    ch1++;
                }
            }


            else
            {
                for(C = 0; C < Ccnt; C++)
                {
                    printf(" %c ",ch2);
                    ch2++;
                }
            }


        printf("\n");
    }

    getch();
    return 0;
}
