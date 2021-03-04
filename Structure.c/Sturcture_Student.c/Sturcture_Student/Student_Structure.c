////////////////////////////////////////////////////////////////////////////////////////////
///      Q:- Student Detail Structure.c
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


// Global Static Varaible Declaration
static int SID = 101;

//Fuction Declaration
void Add_Student_Detail(int);
void Display_Student_Detail(int);

struct Student
{
	 int Roll_No;
	 char Name[30];
	 int Physics;
	 int Chemistry;
	 int Maths;
	 int Total;
	 float Per;   // Percentage
}*SPObj;

int main()
{
	   int iCnt = 0;

	   printf("\n Enter Count of Student You Want to enter =>");
	   scanf_s("%d",&iCnt);

	   SPObj = (struct Student*)malloc(iCnt*sizeof(struct Student));

	   Add_Student_Detail(iCnt);
	   system("pause");
	   system("cls");
	   
	   Display_Student_Detail(iCnt);
	   system("pause");

	   return 0;
}

void Add_Student_Detail(int iCnt)
{
	   int i = 0;

	   printf("\n\n ==============***Student Accept Detail***====================== \n");

	   for(i = 0;i < iCnt;i++,SID++)
	   {
		     printf("\n Roll_No of %d Student is =>%d.\n",i+1,SID);
			 SPObj[i].Roll_No = SID ;

			 printf("\n Enter Student Name =>");
			 scanf_s(" %[^\n]s",&SPObj[i].Name,sizeof(SPObj[i].Name));

			 Up1:
			 printf("\n Enter Marks of Physics =>");
			 scanf_s("%d",&SPObj[i].Physics);

			 if(SPObj[i].Physics > 100)
			 {
				 goto Up1;
			 }

			 Up2:
			 printf("\n Enter Marks of Chemistry =>");
			 scanf_s("%d",&SPObj[i].Chemistry);

			 if(SPObj[i].Chemistry > 100)
			 {
				 goto Up2;
			 }

			 Up3:
			 printf("\n Enter Marks of Mathematics =>");
			 scanf_s("%d",&SPObj[i].Maths);

			 if(SPObj[i].Maths > 100)
			 {
				 goto Up3;
			 }

			  SPObj[i].Total = SPObj[i].Physics + SPObj[i].Chemistry + SPObj[i].Maths;

			  SPObj[i].Per = (SPObj[i].Total*100)/300;

	   }
}

void Display_Student_Detail(int iCnt)
{
	 int i = 0,iSum = 0,Choice = 0;
	 float fSum = 0;

	 printf("\n\n ==============***Student Detail***====================== \n");

	 
     for(;;)
	 {
		             Up:
		             system("cls");
					 for(i = 0;i < iCnt;i++)
					 {
						printf("\n %d. Percentage are =>%0.2f.",i+1,SPObj[i].Per);
					 }
					 printf("\n Enter Your Choice your Choice and (0 for Exit) =>");
					 scanf("%d",&Choice);

					 if(Choice == 0)
					 {
						   exit(0);
					 }

					 if(Choice >= 1 && Choice <= iCnt)
					 {
							for(i = 0;i < iCnt;i++)
						   {
								 if(i+1 == Choice)
								 {
									  fSum = SPObj[i].Per;
								 }
		         
						   }  
					 }
					 else
					 {
						  printf("\n Invalid Choice......!!!");
						  goto Up;
					 }

					 printf("\n\n=================***Below Percentage Detail***=================\n");
					  for(i = 0;i < iCnt;i++)
					  {
							if(fSum == SPObj[i].Per)
							{
									 printf("\n Roll_No     =>%d.\n",SPObj[i].Roll_No);

									 printf("\n Name        =>%s.\n",&SPObj[i].Name);

									 printf("\n Percentage  =>%0.2f%%.\n",SPObj[i].Per);

							}

					  }
					  
					  
					   printf("\n\n=================***Below Percentage Detail***=================\n");

					   system("pause");

	 }
 }