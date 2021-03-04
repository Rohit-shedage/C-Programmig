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

void Acceptingdetail(struct Product *P_ptr,int dcnt)
{
      int i = 0;
      for(i=0;i<dcnt;i++)
              {
                        printf("\n Enter Product Detail %d => \n",i+1);

                        printf("\n\t Enter %d Product Id => ",i+1);
                        scanf("%d",&P_ptr[i].P_id);

                        printf("\n\t Enter %d Product Name => ",i+1);
                        scanf("%s",&P_ptr[i].P_name);
                        //scanf("%[^\n]",S_P_ptr[i].P_name);
                        //gets(S_P_ptr[i].P_name);

                        printf("\n\t Enter %d Product Purchase prize => ",i+1);
                        scanf("%f",&P_ptr[i].P_Purchase);

                        printf("\n\t Enter %d Product Sales Prize => ",i+1);
                        scanf("%f",&P_ptr[i].P_sale);
              }

              return;
}
void Displaying_detail(struct Product *P_ptr,int dcnt)
{
        int i = 0;
        for(i=0;i<dcnt;i++)
              {
                  printf("\n %d Product Detail =>",i+1);
                   printf("\n\n\t Product Id =>%d.  \n\t Product Name =>%s. \n\t Product Purchase Prize =>%0.2f. \n\t Product Sales Prize =>%0.2f. \n",P_ptr[i].P_id,P_ptr[i].P_name,P_ptr[i].P_Purchase,P_ptr[i].P_sale);
              }
              return;
}

 int main()
{

              struct Product *S_P_ptr=NULL;
              int cnt=0;

               printf("\n How Many Product You Want to Enter => ");
              scanf("%d",&cnt);

              S_P_ptr=(struct Product*)malloc(cnt*sizeof(struct Product));



              //Accepting Product Detail
              Acceptingdetail(S_P_ptr,cnt);

             getch();
              system("cls");

              printf("\n\n ===============***Product Detail***======================= \n\n");
              //Displaying Product Detail
              Displaying_detail(S_P_ptr,cnt);

              printf("\n\n ===============***Product Detail***======================= \n\n");

              free(S_P_ptr);

              getch();
              return 0;
}

