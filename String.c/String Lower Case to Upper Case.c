/////////////////////////////////////////////////////////////////
///String Length With Function Calling.
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int  Str_upper(char *Src)
{
            while(*Src!='\0')
          {
                if(*Src>='a' && *Src<='z')
                {
                        *Src = *Src-32;
                }
                Src++;
          }
          return Src;
}


int main()
{
      char Source[50]="\0";

      printf("\n\n -----------------------****STRING****----------------------------- \n\n");

      printf("\n Enter String To Find Its Length => ");
      //scanf("%s",&C_Arr[len]);
      scanf("%[^\n]",&Source);
      //gets(C_Arr[len]);

      Str_upper(Source);

      printf("\n Given String is Converted Lower Case to Upper Case =>%s.",Source);

      printf("\n\n -----------------------****STRING****----------------------------- \n\n");
      printf("\n Press any key to continue....!");

      getch();
      return 0;
}
