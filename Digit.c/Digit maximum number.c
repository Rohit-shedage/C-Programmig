#include<stdio.h>
#include<conio.h>

int main()
{

        int No=0,temp=0,dig=0,max=0;

        printf("\n Enter a number to check maximum in its digit => ");
        scanf("%d",&No);

        temp=No;
        while(temp>0)
        {
             dig=temp%10;

             if(dig>max)
             {
                 max=dig;
             }
             temp=temp/10;
        }

        printf("\n Enter number %d maximum digit is => %d.",No,max);

        getch();
        return 0;
}
