////////////////////////////////////////////////////////////////
///String Reverse...!
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
void Str_rev(char *src,char *dest)
{
      int len = 0;
      len = Str_pr_len(src);
      src = src+(len-1);
      while(len>0)
      {
           *dest=*src;
           dest++;
           src--;
           len--;
      }
      *dest='\0';

}


int main()
{
      char C_Arr[50]="";
      char dest[50]="";

      printf("\n\n -----------------------****STRING REVERSE****----------------------------- \n\n");

      printf("\n Enter String To Find Its Length => ");
      //scanf("%s",&C_Arr[len]);
      scanf("%[^\n]",&C_Arr);
      //gets(C_Arr[len

       Str_rev(C_Arr,dest);

      printf("\n Given String Length Is =>%s.",dest);

      printf("\n\n -----------------------****STRING REVERSE****----------------------------- \n\n");
      printf("\n Press any key to continue....!");

      getch();
      return 0;
}
