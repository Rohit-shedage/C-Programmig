#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,Sum=0;

    printf("\n Enter a Number to get addition => ");
    scanf("%d%d",&No1,&No2);

    Sum=No1*No2;

    printf("\n Number %d + %d => %d .",No1,No2,Sum);

    getch();
    return 0;
}
