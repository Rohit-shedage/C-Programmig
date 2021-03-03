#include<stdio.h>
#include<conio.h>

int E_O_Number_s(char *tArr)
{
      int cnt = 1;
      while(*tArr!='\0')
      {
            if(cnt%2==0)
            {
                  if(*tArr>='a'&&*tArr<='z')
                     {
                           *tArr = *tArr-32;
                     }

            }
          else
          {
                 if(*tArr>='A'&&*tArr<='Z')
                 {
                     *tArr = *tArr+32;
                 }
           }
            *tArr++;
            cnt++;
      }
      return *tArr;
}
int main()
{
       char cArr[50]="";

       printf("\n Enter a String to Its Toggle Case =>");
       scanf("%[^\n]",cArr);
       E_O_Number_s(cArr);

       printf("\n Given String Toggle Case is => %s",cArr);

       getch();
       return 0;
}
