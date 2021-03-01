#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    int Arr[2][5];

    printf("\n 1st Row Element are => \n");

    printf("\n Element of 1st Element is =>  ");
    scanf("%d",&Arr[0][1]);

    printf("\n Element of 2nd Element is => ");
    scanf("%d",&Arr[0][2]);

    printf("\n Element of 3rd Element is => ");
    scanf("%d",&Arr[0][3]);

    printf("\n Element of 4th Element is => ");
    scanf("%d",&Arr[0][4]);

    printf("\n Element of 5th Element is => ");
    scanf("%d",&Arr[0][5]);



    printf("\n 2nd Row Element are => \n");

    printf("\n Element of 1st Element is =>  ");
    scanf("%d",&Arr[1][1]);

    printf("\n Element of 2nd Element is => ");
    scanf("%d",&Arr[1][2]);

    printf("\n Element of 3rd Element is => ");
    scanf("%d",&Arr[1][3]);

    printf("\n Element of 4th Element is => ");
    scanf("%d",&Arr[1][4]);

    printf("\n Element of 5th Element is => ");
    scanf("%d",&Arr[1][5]);

    system("cls");

    //Displaying 1st Array

    printf("\n\n\t 1st Row Element are => \n");

    printf("\n\n 1st. Element => %d  \n\n 2nd. Element => %d. \n\n 3rd. Element => %d. \n\n 4th. Element => %d. \n\n 5th. Element => %d.",Arr[0][1],Arr[0][2],Arr[0][3],Arr[0][4],Arr[0][5]);

    //Displaying 2nd Array

    printf("\n\n\t 2nd Row Element are => \n");

    printf("\n\n 1st. Element => %d  \n\n 2nd. Element => %d. \n\n 3rd. Element => %d. \n\n 4th. Element => %d. \n\n 5th. Element => %d.",Arr[1][1],Arr[1][2],Arr[1][3],Arr[1][4],Arr[1][5]);

    getch();
    return 0;
}
