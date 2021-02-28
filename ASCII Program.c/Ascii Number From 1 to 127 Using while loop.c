///Ascii Number From 1 to127 Using WHILE loop

#include<stdio.h>
#include<conio.h>

int main()
{

    char ch;

    while(ch<130)
    {
        printf("\n %d \t = %c .",ch,ch);
        ch++;
    }

    getch();
    return 0;
}
