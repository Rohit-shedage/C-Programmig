#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
      char str[50]="";

      puts("\n Enter a String To Give Its Length =>");
      scanf("%[^\n]",str);

      system("cls");
      getch();

      printf("\n\n ===========***String Length***=========== \n");

      printf("\n\t\n Length of String is =>%d.",printf(str));

      printf("\n\n ===========***String Length***=========== \n");

      getch();
      return 0;
}
