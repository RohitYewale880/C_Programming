#include<stdio.h>
#include<conio.h>
long long int LLI;
typedef int BOOL;
#define true  1
#define false 0

  BOOL Check_Bit7(LLI)
  {
      int main()
      {
          LLI No = 0;
          BOOL bRet = false;

          printf("\n Enter a number =");
          scanf("%d",&No);

          printf("\n============******============\n");

          bRet = Check_Bit7(No);
          if (bRet == false)
          {
              printf("/n 7 th bit of given number %d is OFF.",No);

          }
          else
          {
             printf("\n 7 th bit of given number %d is ON.",No);
          }

          printf("\n===================******===============");

          getch();
          return 0;

      }
      BOOL Check_Bit7(LLI Num)
      {
          if((No >> 6) & 1)
          {
              return true;
          }
          return false;
      }

