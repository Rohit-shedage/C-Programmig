#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 3

void GetInfo(int*);
void DisplayInfo(int*);
int MaxElement(int*);
int MinElement(int*);

int main()
{
	 int iArr[MAX] = {0}, iRet = 0;

	 GetInfo(iArr);

	 getch();
	 system("cls");

	 DisplayInfo(iArr);

	 getch();
	 //system("cls");

	 iRet = MaxElement(iArr);

	 printf("\n Given Array Maximum Element is => %d.\n",iRet);

	 getch();

	 iRet = MinElement(iArr);

	 printf("\n Given Array Minimum Element is => %d.\n",iRet);

	 getch();

	 return 0;

}

void GetInfo(int *iptr)
{
	int i = 0;

	for(i = 0; i < MAX; i++){
		printf("\n Enter %d Element =>\n", i+1);
		scanf("%d",&iptr[i]);
	}

	return;
}

void DisplayInfo(int *iptr)
{
     int i= 0;

     for(i = 0; i < MAX; i++)
     {
     	printf("\n %d Element is => %d.\n",i+1,iptr[i]);
     }

     return;
}

int MaxElement(int *iptr)
{
	int i = 0,Max = *iptr;

	for(i = 0; i < MAX; i++)
	{
		if(Max < iptr[i])
		{
			Max = iptr[i];
		}
	}

	return Max;
}

int MinElement(int *iptr)
{
	int i = 0,Min = *iptr;

	for(i = 0; i < MAX; i++)
	{
		if(Min > iptr[i])
		{
			Min = iptr[i];
		}
	}

	return Min;
}