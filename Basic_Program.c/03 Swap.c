#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo1=0 , iNo2=0, temp=0;

    printf("Enter Two Number = ");
    scanf("%d%d",&iNo1,&iNo2);

    printf("\n\nNumbers Before Swap => no1=%d, no2=%d",iNo1,iNo2);

    temp=iNo1;
    iNo1=iNo2;
    iNo2=temp;

    printf("\n\nNumbers After Swap => no1=%d, no2=%d",iNo1,iNo2);
    getch();
    return 0;
}
