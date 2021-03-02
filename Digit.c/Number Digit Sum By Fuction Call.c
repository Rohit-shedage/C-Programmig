#include<stdio.h>
#include<conio.h>
int Digitsum(int iNum)
{
      int Dig = 0,iSum = 0;

      while(iNum > 0)
      {
             Dig = iNum % 10;
             iSum = iSum + Dig;
             iNum /= 10;
      }
      return iSum;
}
int main()
{
       int iNo = 0;
      int iRet = 0;

       printf("\n -------------------------------------------------------------------- \n");

      printf("\n Enter Number to Check its Digit Sum =>");
      scanf("%d",&iNo);

      iRet = Digitsum(iNo);

      printf("\n -------------------------------------------------------------------- \n");

      printf("\n Given Number %d Digit Sum is => %i.",iNo,iRet);

       printf("\n -------------------------------------------------------------------- \n");


      getch();
      return 0;
}
