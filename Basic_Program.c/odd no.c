    //Program for odd number from 1 to 100.

#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("\t %d",i);
        }
    }
    getch();

}
