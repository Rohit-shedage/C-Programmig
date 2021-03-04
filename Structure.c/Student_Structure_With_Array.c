#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Count 2

// Global Variable
static int SID = 101;

// Function
void Accept_Student();
void Display_Student();

struct Student_Arr
{
      int Roll_No;
      char Name[30];
      int Physics;
      int Chemistry;
      int Math;
      int Total;
      float Per;
}SObj[Count];

int main()
{
        Accept_Student();
        getch();
        system("cls");
        Display_Student();

        getch();
        return 0;

}

void Accept_Student()
{
        int i = 0;

        for(i = 0;i < Count;i++,SID++)
        {
               printf("\n %d Student Roll_No is =>%d.",i+1,SID);
               SObj[i].Roll_No = SID;

               printf("\n Enter Student Name =>");
               scanf(" %[^\n]",&SObj[i].Name);
               //fflush(stdin);

               printf("\n Enter Student Physics Marks =>");
               scanf("%d",&SObj[i].Physics);

               printf("\n Enter Student Chemistry Marks =>");
               scanf("%d",&SObj[i].Chemistry);

               printf("\n Enter Student Mathematics Marks =>");
               scanf("%d",&SObj[i].Math);
        }
}

void Display_Student()
{
       int i = 0;
       float fSum = 0;

         for(i = 0;i < Count;i++)
         {
                printf("\n %d Student Details are =>",i+1);

                printf("\n\n\t Roll_No =>%d",SObj[i].Roll_No);

                printf("\n\t Name =>%s",SObj[i].Name);

                SObj[i].Total = SObj[i].Physics + SObj[i].Chemistry + SObj[i].Math;

                printf("\n\t Total Marks of => \n\t\t 1.Physics =>%d.\n\t\t 2.Chemistry =>%d.\n\t\t 3.Maths =>%d.\n\n\t\t Total Marks are =>%d.",SObj[i].Physics,SObj[i].Chemistry,SObj[i].Math,SObj[i].Total);

                SObj[i].Per = (SObj[i].Total*100)/300;

                if(i == 0)
                {
                      fSum = SObj[i].Per;
                }

                printf("\n\t Percentage =>%0.2f.",SObj[i].Per);
         }

         for(i = 0;i < Count;i++)
         {
                if(fSum < SObj[i].Per)
                {
                         fSum = SObj[i].Per;
                }
         }
        getch();
         system("cls");
          for(i = 0;i < Count;i++)
         {
                if(fSum == SObj[i].Per)
                {
                            printf("\n Topper is =>");
                            printf("\n\n\t Roll_No =>%d",SObj[i].Roll_No);

                            printf("\n\t Name =>%s",SObj[i].Name);

                            printf("\n\t Percentage =>%0.2f.",SObj[i].Per);
                }
         }
}
