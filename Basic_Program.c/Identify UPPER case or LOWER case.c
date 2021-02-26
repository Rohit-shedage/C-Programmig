#include<stdio.h>
#include<conio.h>

int main()
{

    char ch='\0';

    printf("\n Enter Character to knew its case(UPPER or LOWER) => ");
    ch=getche();
    LU(ch);

    getch();
    return 0;

}

void LU(char ch)
{

    if(ch>='A'&&ch<='Z')
    {
        printf("\n\n character %c is UPPER case \n",ch);
    }

    else if(ch>='a'&&ch<='z')
    {

        printf("\n\n Character %c is LOWER case \n",ch);
    }

    else if(ch>'0'&&ch<='9')
    {
        printf("\n\n Its Number \n");
    }
    else
    {
        printf("\n\n Special Symbol \n");

    }


}
