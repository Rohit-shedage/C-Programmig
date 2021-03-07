/////////////////////////////////////////////////////////
///  05.Write program to accept numbers from user Reverse That Number.
///  Input :- 2356
///  Output :- 6532
///
/////////////////////////////////////////////////////////





#include <stdio.h>
#include <conio.h>

int ReverseOFNumber(int);

int main()
{
	  int iNum = 0;

	  printf("\n Enter a Number To Reverse It =>");
	  scanf("%d",&iNum);

	  
      printf("\n Given Number %d Reverse Number is => %d.",iNum,ReverseOFNumber(iNum));
      printf("\n\n\t Thanks You.....!!!\n");
	  getch();

	  return 0;
}

int Rev = 0; //Always Keep Global Variable While Doing By Recursive 

int ReverseOFNumber(int Num)
{
	
	if (Num == 0)
	{
		/* code */
		return Rev;
	}
	else
	{
	   //Num %= 10;
       Rev = (Rev*10) + Num % 10;
       return ReverseOFNumber(Num/10);
	}
}