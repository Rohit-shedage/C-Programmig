#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=2;

    Turn:

    printf("\n Enter a number to check its whether it is prime or not prime => ");
    scanf("%d",&No);

    if(No<=2)
    {
        printf("\n Invalid Inputs");
        goto Turn;
    }

    while(No>i)
    {
            if(No%i==0)
            {
                break;
            }

            i++;
    }

    (No<=i)?printf("\n Given number %d is prime",No):printf("\n Given number %d is not prime",No);

    getch();
    return 0;


}
