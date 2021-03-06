/////////////////////////////////////////////////////////
///  03.Write program to accept Element in Array From User And Find Minimum From It By Recursive (Do By Macro)
///  Input :- 10  20  30 40  50
///  Output :- 10
///
/////////////////////////////////////////////////////////





#include <stdio.h>
#include <conio.h>
#define MAX 5

int FindMinElement(int*);


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
	iRet = FindMinElement(iArr);
	printf("\n Minimum Number From Given Array is => %d.", iRet);

	printf("\n\n\t Thanks You.....!!!\n");
    getch();

	return 0;
}

int Min = 0;
int FindMinElement(int iArr[])
{

	if (i < MAX)
	{
		/* code */
        if(i == 0)
        {
               Min = iArr[i];
              // continue;
        }
        if(Min > iArr[i])
        {
               Min = iArr[i];
        }
		i += 1;
		return FindMinElement(iArr++);
	}
	else
	{
		return Min;
	}
}

