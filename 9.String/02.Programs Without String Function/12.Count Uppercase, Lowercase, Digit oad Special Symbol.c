#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0, Ucnt = 0, Lcnt = 0, Dcnt = 0, SPcnt = 0;

    printf("\nEnter a string to Check :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if((cSrc[i] >= 'A') && (cSrc[i] <= 'Z'))
        {
            Ucnt++;
        }
        else if((cSrc[i] >= 'a') && (cSrc[i] <= 'z'))
        {
            Lcnt++;
        }
        else if((cSrc[i] >= '0') && (cSrc[i] <= '9'))
        {
            Dcnt++;
        }
        else
        {
            SPcnt++;
        }
        i++;
    }

    printf("\nCount Of Capital Letters is : %d",Ucnt);
    printf("\nCount Of Small Letters is : %d",Lcnt);
    printf("\nCount Of Digit Letters is : %d",Dcnt);
    printf("\nCount Of Special Symbol Letters is : %d",SPcnt);


    getch();
    return 0;

}



