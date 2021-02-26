#include<stdio.h>
#include<conio.h>

int main()
{
            int istart=0,iend=0, irow=0,icol=0;


            printf("\n Enter a two Number to print its pattern => ");
            scanf("%d%d",&istart,&iend);

            for(irow=1;irow<=istart;irow++)
            {
                    for(icol=1;icol<=iend;icol++)
                    {
                        printf(" * ");
                    }
                    printf("\n");
            }

            getch();
            return 0;
}
