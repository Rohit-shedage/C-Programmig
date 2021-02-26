#include<stdio.h>
#include<conio.h>

int main()
{

        int istart=0,iend=0,irow=0,icol=0;

        printf("\n\n --------------****TABLE RANGE REVERSE****-------------------- \n");

        printf("\n Enter number to print its range table is => ");
        scanf("%d%d",&istart,&iend);

        for(irow=10;irow>=1;irow--)
        {
            for(icol=istart;icol<=iend;icol++)
            {
                printf(" %-3d\t",irow*icol);
            }
            printf("\n");
        }

        printf("\n\n --------------****TABLE RANGE REVERSE****-------------------- \n");

        printf("\n Press any key to continue....!");

        getch();
        return 0;
}
