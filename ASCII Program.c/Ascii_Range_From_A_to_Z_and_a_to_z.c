#include <stdio.h>
#include <conio.h>

int main()
{
	 char ch = 'A';

	 printf("\n===============***ASCII TABLE***================ \n\n");

	 for(;ch <= 'Z';ch++)
	 {
	 	  printf("\n\t %c = %d \t %c = %d \n",ch,ch,ch+32,ch+32);
	 }

	 printf("\n===============***ASCII TABLE***================ \n\n");


	 getch();
	 return 0;
}