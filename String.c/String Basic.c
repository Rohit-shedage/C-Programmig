#include<stdio.h>
#include<conio.h>

int main()
{
      int len=0;
      char C_Arr[50];

      printf("\n\n -----------------------****STRING****----------------------------- \n\n");

      printf("\n Enter String To Find Its Length => ");
      //scanf("%s",&C_Arr[len]);
      scanf("%[^\n]",&C_Arr[len]);
      //gets(C_Arr[len]);

      while(C_Arr[len]!='\0')
      {
            len++;
      }

      printf("\n Given String Length Is =>%d.",len);

      printf("\n\n -----------------------****STRING****----------------------------- \n\n");
      printf("\n Press any key to continue....!");

      getch();
      return 0;
}
