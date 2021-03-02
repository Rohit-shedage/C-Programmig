#include<stdio.h>
#include<conio.h>
int Digit_count(int iNum)
{
     int Dig = 0,Dcnt = 0,Temp = 0;



     while(iNum>0)
     {
           Dig=iNum%10;
           Dcnt++;
           iNum/=10;
     }
     return Dcnt;
}
int main()
{
      int iNo = 0;

      printf("\n\n =========***Digit Count By Function Calling***============ \n");

      up:
      printf("\n Enter a Number To Count its Digit =>");
      scanf("%d",&iNo);

      if(iNo<=0)
     {
            goto up;
     }

      printf("\n Entered Number %d Digit Count is =>%d",iNo,Digit_count(iNo));

      printf("\n\n =========***Digit Count By Function Calling***============ \n");

      printf("\n Press any key to continue.....!");


      getch();
      return 0;
}
