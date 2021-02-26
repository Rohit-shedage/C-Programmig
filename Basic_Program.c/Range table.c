#include<stdio.h>
#include<conio.h>

int main()
{

        int istart=0,iend=0,irow=0,icol=0;

        printf("\n Enter number to print its range table is => ");
        scanf("%d%d",&istart,&iend);

        for(irow=1;irow<=10;irow++)
        {
            for(icol=istart;icol<=iend;icol++)
            {
                printf(" %-3d\t",irow*icol);
            }
            printf("\n");
        }

        getch();
        return 0;
}
