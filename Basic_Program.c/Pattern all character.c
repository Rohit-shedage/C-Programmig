#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, irow=0,icol=0;
    char ch='A';


    printf("\n Enter a Number to print its pattern => ");
    scanf("%d",&No);

    for(irow=1;irow<=No;irow++)
    {
        for(icol=1;icol<=No;icol++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
        ch++;
    }

    getch();
    return 0;
}
