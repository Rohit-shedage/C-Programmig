#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;

    printf("\n =======***ASCII RANGE***==========\n");
    for(i=1;i<=128;i++)
    {
        printf("\n ASCII Value of %d = %c",i,i);
    }
    printf("\n =======***ASCII RANGE***==========\n");
    getch();
    return 0;
}
