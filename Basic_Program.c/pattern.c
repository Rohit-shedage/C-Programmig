#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,j=0, No=0;
    printf("Enter a Number");
    scanf("%d",&No);
    for(i=1;i<=No;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n ");
    }

    getch();

}
