#include<stdio.h>
#include<conio.h>

main()
{
      char str[50]="";

      printf("\n Enter a String =>");
      scanf("%[^roh]",str);

      printf("\n Your String is => %s.",str);

      getch();
      return 0;
}
