#include<stdio.h>
#include<conio.h>

int Word_c(char *src)
{
     int Wcnt = 0;
      while(*src != '\0')
      {
            if(Wcnt==0 && *src==' ' )
            {
                 src++;
                 continue;
            }
            while(*src!='\0' && *src!=' ')
            {
                  *src++;
            }
            if(*(src-1)!=' ')
            {
                 Wcnt++;
            }
            src++;
      }
      return Wcnt;
}
int main()
{
      char cArr[50] = "";

      printf("\n Enter a String To Count Word From it =>");
      scanf("%[^\n]",cArr);



      printf("\n\n ============***Word Count in Sting***================= \n");

      printf("\n Given String Word Count is =>%d",Word_c(cArr));

      printf("\n\n ============***Word Count in Sting***================= \n");

      printf("\n Press any key continue...!");

      getch();
      return 0;

}
