#include<stdio.h>
#include<conio.h>

void  Fibonacci(int iNum)
{
      int iNo1 = 0,iNo2 = 1,iNo3 = 0;
      //int iNo1 = 1,iNo2 = 0,iNo3 = 0;


      printf("\n\n =========***Fibonacci Series***============ \n");

      printf("\t%d\t%d",iNo1,iNo2);

      while(iNum>2)
      {
            iNo3=iNo1+iNo2;
            printf("\t%d",iNo3);
            //iNo3=iNo1+iNo2;
            iNo1=iNo2;
            iNo2=iNo3;
            iNum--;
      }
      printf("\n\n =========***Fibonacci Series***============ \n");


}

int main()
{
      int iNo = 0;

      up:
      printf("\n Enter a Number To Check  Fibonacci Series =>");
      scanf("%d",&iNo);

      if(iNo<=0)
      {
           printf("\n Invalid Number");
           goto up;
      }

      Fibonacci(iNo);


      getch();
      return 0;
}

