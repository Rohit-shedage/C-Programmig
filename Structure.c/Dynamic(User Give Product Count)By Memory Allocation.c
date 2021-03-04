#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Product
{
      int P_id;
      char P_name[20];
      float P_Purchase;
      float P_sale;
};

 int main()
{

              struct Product *S_P_ptr=NULL;
              int cnt=0,i=0;

               printf("\n How Many Product You Want to Enter => ");
              scanf("%d",&cnt);

              S_P_ptr=(struct Product*)malloc(cnt*sizeof(struct Product));



              //Accepting Product Detail
              for(i=0;i<cnt;i++)
              {
                        printf("\n Enter Product Detail %d => \n",i+1);

                        printf("\n\t Enter %d Product Id => ",i+1);
                        scanf("%d",&S_P_ptr[i].P_id);

                        printf("\n\t Enter %d Product Name => ",i+1);
                        scanf("%s",S_P_ptr[i].P_name);
                        //scanf("%[^\n]",S_P_ptr[i].P_name);
                        //gets(S_P_ptr[i].P_name);

                        printf("\n\t Enter %d Product Purchase prize => ",i+1);
                        scanf("%f",&S_P_ptr[i].P_Purchase);

                        printf("\n\t Enter %d Product Sales Prize => ",i+1);
                        scanf("%f",&S_P_ptr[i].P_sale);
              }

             getch();
              system("cls");

              printf("\n\n ===============***Product Detail***======================= \n\n");
              //Displaying Product Detail
              for(i=0;i<cnt;i++)
              {
                  printf("\n %d Product Detail =>",i+1);
                   printf("\n\n\t Product Id =>%d.  \n\t Product Name =>%s. \n\t Product Purchase Prize =>%0.2f. \n\t Product Sales Prize =>%0.2f. \n",S_P_ptr[i].P_id,S_P_ptr[i].P_name,S_P_ptr[i].P_Purchase,S_P_ptr[i].P_sale);
              }
              printf("\n\n ===============***Product Detail***======================= \n\n");

              free(S_P_ptr);

              getch();
              return 0;
}
