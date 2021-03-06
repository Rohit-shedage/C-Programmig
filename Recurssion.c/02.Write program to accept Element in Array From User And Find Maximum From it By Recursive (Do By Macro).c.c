/////////////////////////////////////////////////////////
///  02.Write program to accept Element in Array From User And Find Maximum From it By Recursive (Do By Macro)
///  Input :- 10  20  30 40  50
///  Output :- 50
///
/////////////////////////////////////////////////////////





#include <stdio.h>
#include <conio.h>
#define MAX 5

int FindMaxElement(int*);


int i = 0;
int main()
{
	int iArr[MAX] = {0}, iRet = 0;

	for (i = 0; i < MAX; i++)
	{
		/* code */
		printf("\n Enter a Number %d Element of Array =>", i + 1);
		scanf("%d", &iArr[i]);

	}

	i = 0;
	iRet = FindMaxElement(iArr);
	printf("\n Maximum Number From Given Array is => %d.", iRet);
	printf("\n\n\t Thanks You.....!!!\n");
    getch();

	return 0;
}

int Max = 0;
int FindMaxElement(int iArr[])
{

	if (i < MAX)
	{
		/* code */
		if (iArr[i] == 0)
		{
			Max = iArr[i];
		}
		if (Max < iArr[i])
		{
			Max = iArr[i];
		}
		i += 1;
		return FindMaxElement(iArr++);
	}
	else
	{
		return Max;
	}
}

