                                                    /////////////////////////////////////////////////////////////////////
                                                    //////....Dynamic Memory Allocation...../////
                                                    ////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
           int cnt = 0,i = 0,srch = 0,sum=0;
           int *ptr = NULL;

           printf("\n\n----------------------------*****$$$*****--------------------------- \n");

           up:

           printf("\n How Many Count You Have To Enter => ");
           scanf("%d",&cnt);

           if(cnt<=0)
           {
                   printf("\n Invalid Input");
                   goto up;
           }

           ptr=(int*)malloc(cnt*sizeof(int));

           //Accepting Variable
           for(i=0;i<cnt;i++)
           {
                   printf("\n Enter Value %d => ",i+1);
                   scanf("%d",&ptr[i]);
                   sum=sum+ptr[i];
           }

           system("cls");

           printf("\n\n----------------------------*****$$$*****--------------------------- \n");

           printf("\n Entered Element Addition is => %d.\n",sum);

           //Searching Element
           printf("\n Search Element You Have Entered => ");
           scanf("%d",&srch);

           for(i=0;i<cnt;i++)
           {
                    if(srch==ptr[i])
                    {
                        break;
                    }
           }

            if(i==cnt)
            {
                    printf("\n Not Found Element You Have Entered");
            }

            else
            {
                     printf("\n Entered Element is  %d  Found",srch);
            }

            free(ptr);

            printf("\n Thank You.......! \n");
            printf("\n\n----------------------------*****$$$*****--------------------------- \n");

            printf("\n Press Any Key To Continue.....!");
            getch();
            return 0;

}
