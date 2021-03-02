#include<stdio.h>
#include<conio.h>
void Digit_count(int *iNum)
{
     int Dig = 0,Dcnt = 0,Temp = 0;




     while(*iNum>0)
     {
           Dig=*iNum%10;
           Dcnt++;
           *iNum/=10;
     }

      printf("\n Entered Number  Digit Count is =>%d",Dcnt);

      printf("\n\n =========***Digit Count By Function Calling***============ \n");

      printf("\n Press any key to continue.....!");


}
int main()
{
      int iNo = 0;
      int Ret = 0;

      printf("\n\n =========***Digit Count By Function Calling***============ \n");

      up:
      printf("\n Enter a Number To Count its Digit =>");
      scanf("%d",&iNo);

      if(iNo<=0)
     {
            goto up;
     }
     Digit_count(&iNo);




      getch();
      return 0;
}
