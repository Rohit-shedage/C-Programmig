#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
               int cnt = 0,i = 0,src=0;
               int *Arr = NULL;

               printf("\n Enter Count Array You Want =>");
               scanf("%d",&cnt);

               Arr=(int*)malloc(cnt*sizeof(int));

               //Displaying Loop
               for(i = 0;i<cnt;i++)
               {
                     printf("\n %d Element is => %d.",i+1,Arr[i]);
               }

               getch();
               system("cls");

               //Accepting Loop
               for(i = 0;i<cnt;i++)
               {
                      printf("\n Element Of %d is =>",i+1);
                      scanf("%d",&Arr[i]);
               }

               getch();
               system("cls");

               printf("\n\n ==============***Displaying Array Element***=================== \n");

               //Displaying Loop
               for(i = 0;i<cnt;i++)
               {
                     printf("\n %d Element is =>%d.",i+1,Arr[i]);
               }
                printf("\n\n ==============***Displaying Array Element***=================== \n");

                getch();
                system("cls");
                //Searching Array
                printf("\n\n ==============***Searching Array Element***=================== \n");

                printf("\n Enter Element to Searching =>");
                scanf("%d",&src);

                for(i=0;i<cnt;i++)
                {
                       if(src==Arr[i])
                       {
                             break;
                       }
                }

                if(i==cnt)
                {
                       printf("\n Not Found");
                }
                else
                {
                      printf("\n Found");
                }

               printf("\n\n ==============***Searching Array Element***=================== \n");

               printf("\n Press any key to continue....!!\n");

               free(Arr);
               return 0;

}
