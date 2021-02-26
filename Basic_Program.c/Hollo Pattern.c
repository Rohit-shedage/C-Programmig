                                                /////////////////////////////////////////////////
                                                //////***....Hollo Pattern....***//////
                                                /////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,irow=0,icol=0;

    printf("\n\n -----------------***Hollo Pattern***-------------------------\n");

    printf("\n Enter a Number to print its pattern => ");
    scanf("%d",&No);

    for(irow=1;irow<=No;irow++)
    {
        for(icol=1;icol<=No;icol++)
        {
            if((irow==1)||(icol==1)||(irow==No)||(icol==No))
            {
                 printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n\n -----------------***Hollo Pattern***-------------------------\n");
    printf("\n\n Press any key to Continue......!");

    getch();
    return 0;
}
