#include<stdio.h>
#include<conio.h>

int main()
{
       int No=21;
       int *ptr=&No;

       ++No;
       ptr++;

       printf("\n\t %d \n",No);
       printf("\n\t %d \n",&No);
       printf("\n\t %d \n",ptr);
        printf("\n\t %d \n",&(*ptr));
       printf("\n\t %d \n",&ptr);

      printf("\n\t %d \n",*ptr);
       //printf("\n\t %d \n",ptr);

}
