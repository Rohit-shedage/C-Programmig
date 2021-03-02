#include<stdio.h>
#include<conio.h>

int main()
{

                int No=0,temp=0,dig=0,sum=0;

                printf("\n Enter a number to check minimum in its digit => ");
                scanf("%d",&No);

                temp=No;
                while(temp>0)
                {
                             dig=temp%10;

                             sum=sum+dig;

                             temp=temp/10;
                }

                printf("\n Enter number %d maximum digit is => %d.",No,sum);

                getch();
                return 0;

}
