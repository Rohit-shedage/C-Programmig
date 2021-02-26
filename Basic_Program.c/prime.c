//super prime
#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,ret=0;

    printf("\n enter number");
    scanf("%d",&no);

    ret=Is_super_prime(no);

    if(ret==1)
    {
        printf("\n no is Super Prime");
    }
    else if(ret==2)
    {
        printf("\n is prime but not super prime");
    }
    else
    {
        printf("\n no is not found");
    }

    getch();
    return 0;
}

int Is_Prime(int num)
{
    int i=2;

    if(num==0 || num==1)
    {
        return 1;
    }

    while(i<(num/2))
    {
        if(num/1==0)
        {
            return o;
        }
        i++;
    }
    return 1;

}
