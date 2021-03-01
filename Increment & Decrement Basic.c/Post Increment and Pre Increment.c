#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int gNum = 17;
/*
void Increment_Pre()
{
     auto int a =0 ;
     static int p = 21;

     printf("\n Value of a => %d.",a);//0,0,0 it is Auto Storage Class it will be under stack Memory local Variable.

     a = gNum++;//17,18,19 it is pre Increment so It Will first Take 17 and it will do Increment .

     printf("\n Value of p => %d.",p);//21,31,42 static Memory From in Data Section so it is Preserved memory so it can't Initialized Double.
     printf("\n gNum => %d",gNum);

     p = (p) + (a - 7);
     return;
}
*/
void Increment_Post()
{
     auto int a =0 ;
     static int p = 21;

     printf("\n Value of a => %d.",a);//0,0,0 it is Auto Storage Class it will be under stack Memory local Variable.

     a = ++gNum;//18,19,20 it is post Increment so It Will first Take 17+1=18 and it will do Increment .

     printf("\n Value of p => %d.",p);//21,32,44 static Memory From in Data Section so it is Preserved memory so it can't Initialized Double.
     printf("\n gNum => %d",gNum);

     p = (p) + (a - 7);
     return;
}
int main()
{
      //Increment_Pre();
      //Increment_Pre();
      //Increment_Pre();

      //getch();
      //system("cls");

      Increment_Post();
      Increment_Post();
      Increment_Post();

      getch();
      return 0;
}

