#include<stdio.h>
#include<conio.h>
int Digit(int iNo)
{
    int Dig = 0,Dcnt = 0;
      while(iNo > 0)
      {
            Dig = iNo % 10;
             Dcnt++;
             iNo /= 10;
      }
      return Dcnt;
}
int Digitsum(int iNum)
{
      int Dig = 0,iSum = 0,Dig2 = 0,cnt = 0;

      while(iNum > Digit(iNum))
      {
              Dig = iNum % 10;
             iNum /= 10;
      }
      while(iNum > cnt)
      {
            Dig2 = iNum %10;
            iSum = iSum + Dig2;
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
