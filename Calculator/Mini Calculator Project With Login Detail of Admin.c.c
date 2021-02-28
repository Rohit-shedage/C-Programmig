////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Mini Calculator Project With Login Admin UserName and Password .
/// Note :-
///             UserName => Rohit
///             Password => Rohit123
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int iSum = 0;

void Addition(int iNo1,int iNo2)
{
        iSum = iNo1 + iNo2;

        printf("\n Addition of Two Addition");
        printf("\n %d + %d = %d",iNo1,iNo2,iSum);
        return;
}
void Subtraction(int iNo1,int iNo2)
{
        iSum = iNo1 - iNo2;
        printf("\n %d - %d = %d",iNo1,iNo2,iSum);
        return;
}
void Multiplication(int iNo1,int iNo2)
{
        iSum = iNo1 * iNo2;
        printf("\n %d * %d = %d",iNo1,iNo2,iSum);
        return;
}
void Division(int iNo1,int iNo2)
{
        iSum = iNo1 / iNo2;
        printf("\n %d / %d = %d",iNo1,iNo2,iSum);
        return;
}

void Login()
{
             int iNo1 = 0,iNo2 = 0,iSum = 0;
             char choice = '\0';

             char cUN[50] = ""; // For Login Input String
             char cPass[50] = ""; // For Login Input String

             up:
             printf("\n Enter User Name =>");
             scanf("%s",&cUN);

            pass:
            printf("\n Enter Password =>");
            scanf(" %s",&cPass);

             if(strcmp( cUN,"Rohit") == 0) // String Compare Function is Predefined in 'C' String Library
            {
                     if(strcmp(cPass,"Rohit123") == 0) //String Compare Function is Predefined in 'C' String Library
                     {
                              printf("\n\t Login Successful......!! \n\n\t Enter Key to Continue...!!");
                              getch();
                              system("cls");

                              for(;;)
                              {
                                      printf("\n Press Any Number From 1 to 4 to See Mini Operation on Calculator........!\n");
                                      printf("\n 1.Addition of Two Number.");
                                      printf("\n 2.Subtraction of Two Number.");
                                      printf("\n 3.Multiplication of Two Number.");
                                      printf("\n 4.Division of Two Number.");
                                      printf("\n 5.Exit......!!!");

                                      printf("\n\n  Enter your Choice =>");
                                      scanf(" %c",&choice);

                                      if(choice < '5')
                                      {
                                              printf("\n Enter Two Number =>");
                                              scanf("%d%d",&iNo1,&iNo2);
                                      }

                                      switch(choice)
                                      {
                                                 case '1':
                                                            Addition(iNo1,iNo2);
                                                            getch();
                                                            system("cls");
                                                            break;

                                                 case '2':
                                                             Subtraction(iNo1,iNo2);
                                                             getch();
                                                             system("cls");
                                                             break;

                                                 case '3':
                                                             Multiplication(iNo1,iNo2);
                                                              getch();
                                                              system("cls");
                                                             break;

                                                 case '4':
                                                             Division(iNo1,iNo2);
                                                             getch();
                                                             system("cls");
                                                             break;

                                                 case '5':
                                                             exit(0);

                                                 default:
                                                              printf("\n Invalid Number");
                                      }
                              }
                     }
                     else
                     {
                              printf("\n Invalid Password. Please Enter Valid Password......!!");
                              goto pass;
                     }
            }
             else
        {
             printf("\n Invalid  UserName. Please Enter Valid UserName...!!");
             goto up;
        }

}
int main()
{
      Login();
      printf("\n Press any key to continue.........!!");

      getch();
      return 0;
}
