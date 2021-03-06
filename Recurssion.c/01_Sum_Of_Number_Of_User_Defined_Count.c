/////////////////////////////////////////////////////////
///  01.Write program to accept Count from user And Do Sum Of Numbers.
///  Input :- 4
///           10
///           10
///           10
///           10
///  Output :- 40.
///
/////////////////////////////////////////////////////////




#include <stdio.h>
#include <conio.h>

int SumOfNumber(int);

int main()
{
	  int iNo = 0;

	  printf("\n Enter a Number of Count To Calculate =>");
	  scanf("%d",&iNo);

	  printf("\n Given Number Count %d Sum is => %d.",iNo,SumOfNumber(iNo));
      printf("\n\n\t Thanks You.....!!!\n");
	  getch();

	  return 0;
}

int SumOfNumber(int Num)
{
	int iNo = 0,Sum = 0;
	if (Num == 0)
	{
		/* code */
		return Sum;
	}
	else
	{
		printf("\n Enter a Number =>");
		scanf("%d",&iNo);

        Sum += iNo;

        return  Sum + SumOfNumber(Num - 1);
	}
}