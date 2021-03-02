#include<stdio.h>
#include<conio.h>

int main()
{
      int i = 0,sum=0,dig=0,a=0;

      for(i=1;i<=100;i++)
      {
            sum=i*i;
            dig=sum%10;
            if(dig==i)
            {
                    printf("\n %d = %d",i,sum);
            }
      }

}
