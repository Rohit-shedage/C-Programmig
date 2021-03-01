                                                        ////////////////////////
                                                        ////Array Using Loop////
                                                        ///////////////////////


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    int Arr[2][5];
    int i=0,j=0;


    for(i=0;i<2;i++)
    {

        printf("\n\n\t %d Row Element are => \n",i+1);

        for(j=0;j<5;j++)
        {


                printf("\n  Enter a Element  =>  ");
                scanf("%d",&Arr[i][j]);


        }

    }


    system("cls");

    //Displaying  Array

    for(i=0;i<2;i++)
    {

        printf("\n\n\t %d Row Element are => \n",i+1);
        for(j=0;j<5;j++)
        {


            printf("\n\n Entered Element are =%d. \n",Arr[i][j]);
        }
    }

    getch();
    return 0;
}
