#include<stdio.h>
#include<conio.h>

int main()
{

                int No=0,temp=0,dig=0,min=9;

                printf("\n Enter a number to check minimum in its digit => ");
                scanf("%d",&No);

                temp=No;
                while(temp>0)
                {
                             dig=temp%10;



                             if(dig<min)
                             {
                                 min=dig;
                             }
                             temp=temp/10;
                }

                printf("\n Enter number %d maximum digit is => %d.",No,min);

                getch();
                return 0;

}
