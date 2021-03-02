#include<stdio.h>
#include<conio.h>

int main()
{
      int i = 0,sum=0,dig=0,temp=0;

      for(i=1;i<=100;i++)
      {
            temp=i;
            while(temp>0)
            {
                    dig=temp%10;
                    sum=temp*temp*temp;
                    temp/=10;

            }
             if(i==sum)
                    {
                          break;
                    }

      }
      if(i == sum)
      {
           printf("\n%d",sum);
      }


}
