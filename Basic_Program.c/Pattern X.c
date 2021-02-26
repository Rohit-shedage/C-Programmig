#include<stdio.h>
#include<conio.h>
int main()
{
      int iNo = 0, i = 0,j = 0;

      printf("\n Enter a Number =>");
      scanf("%d",&iNo);

      for(i = 0;i <= iNo;i++)
      {
          for(j = 0;j <= iNo;j++)
          {
              if( i == j || i + j == iNo+1)
              {
                  printf(" * ");
              }
              else
              {
                   printf("   ");
              }
          }
          printf("\n");

      }

      getch();
      return 0;


}
