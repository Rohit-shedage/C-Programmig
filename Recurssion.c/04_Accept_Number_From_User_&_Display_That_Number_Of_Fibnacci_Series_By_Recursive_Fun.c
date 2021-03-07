/////////////////////////////////////////////////////////
///  04.Write program to accept numbers from user And Find Fibnacci Series Of That Number.
///  Input :- 5
///  Output :- 0 1 1 2 3
///
/////////////////////////////////////////////////////////



#include <stdio.h>
#include <conio.h>

int FibnacciOfNumber(int,int,int,int);

int main()
{
	  int iNum = 0,iNo1 = 1,iNo2 = 0,iNo3 = 0;

	  printf("\n Enter a Number To Find Fibnacci Series Of That Number =>");
	  scanf("%d",&iNum);

	  FibnacciOfNumber(iNum,iNo1,iNo2,iNo3);

	  printf("\n\n\t Thanks You.....!!!\n");
      //printf("%d \n",Sum);
	  getch();

	  return 0;
}

int FibnacciOfNumber(int Num,int iNo1,int iNo2,int iNo3)
{
	//int iNo1 = 1,iNo2 = 0,iNo3 = 0;
	if (Num == 0)
	{
		/* code */
		return ;
	}
	else
	{
		printf(" %d",iNo3);
		iNo3 = iNo1 + iNo2;
		iNo1 = iNo2;
		iNo2 = iNo3;

       return FibnacciOfNumber(Num - 1,iNo1,iNo2,iNo3);
	}
}