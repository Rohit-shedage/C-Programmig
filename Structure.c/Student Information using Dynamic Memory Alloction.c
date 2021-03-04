#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Student
{
      int Roll_no;
      char Name[20];
      char Course[20];
      char City[20];
      float Per;
};

void Accepting(struct Student *SSptr,int Cnt)
{
          int i = 0;

          for(i = 0;i < Cnt;i++)
          {
                   printf("\n\t Enter %d Student Detail => \n",i+1);

                   printf("\n Enter Roll No of Student =>");
                   scanf("%d",&SSptr[i].Roll_no);

                   printf("\n Enter Name of Student =>");
                   scanf("%s",&SSptr[i].Name);

                   printf("\n Enter Course of Student =>");
                   scanf("%s",&SSptr[i].Course);

                   printf("\n Enter City of Student =>");
                   scanf("%s",&SSptr[i].City);

                   printf("\n Enter Percentage of Student =>");
                   scanf("%f",&SSptr[i].Per);
          }

          return;
}

void Displaying(struct Student *SSptr,int Cnt)
{
         int i = 0;

         for(i = 0;i < Cnt;i++)
         {
               printf("\n\t %d Student Information => \n",i+1);
               printf("\n\n Roll_No => %d. \n Name => %s. \n Course => %s. \n City => %s. \n Percentage => %0.2f. \n",SSptr[i].Roll_no,SSptr[i].Name,SSptr[i].Course,SSptr[i].City,SSptr[i].Per);
         }
         return;
}

int main()
{
             int Cnt = 0;
             struct Student *Sptr = NULL;

             printf("\n Enter Student Count for Detail =>");
             scanf("%d",&Cnt);

             Sptr = (struct Student*)malloc(Cnt*sizeof(struct Student));

             if(Sptr == NULL)
             {
                    printf("\n Memory is Not Allocated");
                    return 0;
             }

             Accepting(Sptr,Cnt);

             getch();

             system("cls");

             printf("\n ================================================== \n");

             Displaying(Sptr,Cnt);

              printf("\n ================================================== \n");

             free(Sptr);

             getch();
             return 0;
}
