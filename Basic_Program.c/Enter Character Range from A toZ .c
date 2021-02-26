#include<stdio.h>
#include<conio.h>
int main()
{

        char ch;
        char istart,iend;

        printf("\n Enter a Character Range From A to Z => ");
        scanf("%c%c",&istart,&iend);

        for(ch='A';ch<='Z';ch++)
        {
            for(ch=istart;ch<=iend;ch++)
            {
                printf("\n %c",ch);
            }
        }



        getch();
        return 0;
}
