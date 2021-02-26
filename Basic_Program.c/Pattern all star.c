#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,irow=0,icol=0;

    printf("\n Enter a Number to print its pattern => ");
    scanf("%d",&No);

    for(irow=1;irow<=No;irow++)
    {
        for(icol=1;icol<=No;icol++)
        {
            printf(" * ");
            if(irow+icol == No+1)
            {
                  printf(" # ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
