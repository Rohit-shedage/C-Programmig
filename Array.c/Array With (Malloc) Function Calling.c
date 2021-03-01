    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Displaying_Array(int*A_iptr,int dcnt)
{
              int i=0;
              for(i = 0;i<dcnt;i++)
               {
                     printf("\n %d Element is => %d.",i+1,A_iptr[i]);
               }

}
void Accepting_Array(int*iptr,int Num)
{
               int i = 0;
               for(i=0;i<Num;i++)
               {
                      printf("\n Element Of %d is =>",i+1);
                      scanf("%d",&iptr[i]);
               }
}

void Searching_Array(int*S_iptr,int dcnt)
{
        int src = 0,i=0;
        printf("\n Enter Element to Searching =>");
        scanf("%d",&src);

                for(i=0;i<dcnt;i++)
                {
                       if(src==S_iptr[i])
                       {
                             break;
                       }
                }

                if(i==dcnt)
                {
                       printf("\n Not Found");
                }
                else
                {
                      printf("\n Found");
                }

}

int main()
{
               int cnt = 0;
               int *Arr = NULL;

               printf("\n Enter Count Array You Want =>");
               scanf("%d",&cnt);

               Arr=(int*)malloc(cnt*sizeof(int));

                Displaying_Array(Arr,cnt);

               getch();
               system("cls");

               //Accepting Loop
               Accepting_Array(Arr,cnt);


               getch();
               system("cls");

               printf("\n\n ==============***Displaying Array Element***=================== \n");

               //Displaying Loop
                Displaying_Array(Arr,cnt);
                printf("\n\n ==============***Displaying Array Element***=================== \n");

                getch();
                system("cls");

                printf("\n\n ==============***Searching Array Element***=================== \n");

                //Searching Element
                Searching_Array(Arr,cnt);

                printf("\n\n ==============***Searching Array Element***=================== \n");

               printf("\n Press any key to continue....!!\n");

               free(Arr);
               return 0;

}
