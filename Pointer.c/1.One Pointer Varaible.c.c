#include<stdio.h>
#include<conio.h>

int main()
{
       int No=17;
       int *Num = &No;

        printf("\n -------------------***ONE POINTER VARAIBLE***------------------ \n\n");                     /* **OUTPUT ** */

       printf("\n Value of No => %d. \n",No);                                                                   //17

       printf("\n Address of No => %d. \n",&No);                                                               //6356748

       printf("\n Value of No using pointer => %d. \n",*Num);                                                  //17

       printf("\n Address of No using pointer => %d. \n",&(*Num));                                            //6356748

       printf("\n Value pointer variable = %d. \n",Num);                                                      //6356748

       printf("\n Address pointer variable => %d. \n",&Num);                                                  //6356744

        printf("\n -------------------***ONE POINTER VARAIBLE***------------------ \n\n");


       getch();
       return 0;
}
