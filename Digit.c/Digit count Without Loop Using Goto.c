///////////////////////////////////////////////////////////////////////////////////
///Digit count Without Using Loop Goto program.c
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{

        int No=0,dig=0,cnt=0,temp=0;

        printf("\n\n -------------------------***DIGIT COUNT***------------------------------- \n");


        printf("\n Enter a Number to count its digit is => ");
        scanf("%d",&No);
        /*
        if(No<=0)
        {
              printf("\n Invalid Input");
              goto up;
        }
        */
        temp=No;
        up:

        if(temp>0)
        {
            dig=temp%10;
            cnt++;
            temp=temp/10;
            goto up;
        }

        printf("\n Entered number %d count is =>%d.",No,cnt);

         printf("\n\n -------------------------***DIGIT COUNT***------------------------------- \n");

        printf("\n Press any key to continue....!");

        getch();
        return 0;
}
