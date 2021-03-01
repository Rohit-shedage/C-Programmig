/// Double Pointer Demonstration Using Function
/*
 INPUT :-
   Enter 1st Subject Marks => 80
   Enter 2nd Subject Marks =>  60
   Enter 3rd Subject Marks =>  70

 OUTPUT :-
   Total Marks Of Student Is => 210
   Percentage Of Student Is =>  70%
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float CalculateTotalPercentage(int *Total,int **SubMarks)
{

	int *Temp = *SubMarks; ///Temporary Pointer Variable Is Pointing To Single Pointer
    float Per = 0.0;

     for (int i = 0; i < 3; i++)
     {
        *Total = *Total + Temp[i];
     }


    return *Total/300.0*100;  /// 300.0 Is Value We Have To Put Because Compiler is Not Giving Percentage It Gives 0.00
}

int main()
{
	int i = 0,Total = 0;

	float Per = 0.0f;

	int *SubMarks = NULL;

	SubMarks = (int*)malloc(sizeof(int)*3);

	printf("\n\n==================****==================\n");

	for ( i = 0; i < 3; i++)
	{
		/* code */

		printf("\n Enter %d Subject Marks =>",i+1);
		scanf("%d",&SubMarks[i]);
	}

	Per = CalculateTotalPercentage(&Total,&SubMarks);

	printf("\n\n=====================****==================\n");

	printf("\n\t Total Marks Of Student Is => %d \n",Total);

	printf("\n\t Percentage Of Student Is => %0.2f%% \n",Per);

	printf("\n=====================****====================\n");

	getch();
	return 0;
}
