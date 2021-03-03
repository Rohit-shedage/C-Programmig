////////////////////////////////////////////////////////////////
///String Length With Function Calling.
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int Str_pr_len(char *Str_ptr)
{
             int len = 0;
            while(Str_ptr[len]!='\0')
          {
                len++;
          }
          return len;
}


int main()
{
      char C_Arr[50];

      printf("\n\n -----------------------****STRING****----------------------------- \n\n");

      printf("\n Enter String To Find Its Length => ");
      //scanf("%s",&C_Arr[len]);
      scanf("%[^'\n']",&C_Arr);
      //gets(C_Arr[len]);

      printf("\n Given String Length Is =>%d.", Str_pr_len(C_Arr));

      printf("\n\n -----------------------****STRING****----------------------------- \n\n");
      printf("\n Press any key to continue....!");

      getch();
      return 0;
}
