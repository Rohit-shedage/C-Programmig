#include<stdio.h>
#include<conio.h>

int main()
{

                int No=0,temp=0,dig=0,rev=0;

                printf("\n\n --------------***REVERSE DIGIT NUMBER***------------------");

                up:

                printf("\n Enter a number to check minimum in its digit => ");
                scanf("%d",&No);

                if(No<=0)
                {

                        printf("\n Invalid Input");
                        goto up;
                }

                temp=No;
                while(temp>0)
                {
                             dig=temp%10;

                             rev=(rev*10)+dig;

                             temp=temp/10;
                }

                printf("\n Enter number %d maximum digit is => %d.",No,rev);

                 printf("\n\n --------------***REVERSE DIGIT NUMBER***------------------");


                getch();
                return 0;

}
