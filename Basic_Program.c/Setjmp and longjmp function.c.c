#include <setjmp.h>
jmp_buf buf;
  //#include <setjmp.h>
   banana()
{
            printf("in banana()\n");
            printf("\n\t setjmp");
             longjmp(buf, 1);
              /*NOTREACHED*/
               printf("\n you'll never see this, because I longjmp'd");
}


main()
 {
        if (setjmp(buf))
            printf("\n\nback in main\n");
        else
        {
              printf("first time through\n");
              banana();
        }
}


/*#include<stdio.h>
int main()
<%
      char str<:20:> =<%%>;
      printf("\n Enter String =>");
      gets(str);

     printf("\n\t %s",str);
%>*/

