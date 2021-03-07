/////////////////////////////////////////////////////////
///  06.Write program to accept numbers from user as iNum1 and iNum2 and print iNum1^iNum2 (power function).
///  Input :- 5^3
///  Output :- 125
///
/////////////////////////////////////////////////////////



#include <stdio.h>
#include <conio.h>

int PowerFunction(int,int);

int main()
{
	  int iNum1 = 0,iNum2 = 0;

	  printf("\n Enter a Two Number To Find Power Of Number =>");
	  scanf("%d%d",&iNum1,&iNum2);

	  
      printf("\n Given Number %d ^ %d Power is => %d.",iNum1,iNum2,PowerFunction(iNum1,iNum2));

      printf("\n\n\t Thanks You.....!!!\n");
	  getch();

	  return 0;
}

int Pow = 1; //Always Keep Global Variable While Doing By Recursive 

int PowerFunction(int iNo1,int iNo2)
{
	
	if (iNo2 == 0)
	{
		/* code */
		return Pow;
	}
	else
	{
	   Pow = Pow * iNo1;
      
       return PowerFunction(iNo1,iNo2 - 1);
	}
}