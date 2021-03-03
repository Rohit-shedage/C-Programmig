#include<stdio.h>
#include<conio.h>

int Toggle_case(char *tArr)
{
      int cnt = 1;
      while(*tArr!='\0')
      {
            if(cnt%2==0)
            {
                  if(*tArr>='A'&&*tArr<='Z')
                     {
                           *tArr = *tArr+32;
                     }

            }
          else
          {
                 if(*tArr>='a'&&*tArr<='z')
                 {
                     *tArr = *tArr-32;
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
       Toggle_case(cArr);

       printf("\n Given String Toggle Case is => %s",cArr);

       getch();
       return 0;
}
