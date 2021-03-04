////////////////////////////////////////////////////////////////////////////////////
///Student Information Using Structure With Array.
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int S_rno;
    char S_name[20];
    char S_course[20];
    char S_city[20];
};

int main()
{

    struct Stud S_obj1[2];
    int i=0;


    printf("\n ============****STUDENT DETAILS ACCEPTING****============= \n\n");

    //Accepting Student Information

    for(i=0;i<2;i++)
    {

            printf("\n\t Enter %d Student Detail => \n",i+1);

            printf("\n Enter Student R_No => ");
            scanf("%d",&S_obj1[i].S_rno);

            printf("\n Enter Student Name => ");
            scanf(" %s",S_obj1[i].S_name);

            printf("\n Enter Student Course => ");
            scanf("%s",S_obj1[i].S_course);


            printf("\n Enter Student City => ");
            scanf("%s",S_obj1[i].S_city);

    }

    system("cls");

    printf("\n ============****STUDENT DETAILS DISPLAYING****============= \n\n");

    //Displaying 1st & 2nd Student InformationS

    for(i=0;i<2;i++)
    {


            printf("\n\t Displaying %d Student Details => \n",i+1);

            printf("\n Roll_no => %d. \n\n Name => %s. \n\n Course => %s. \n\n City => %s \n\n",S_obj1[i].S_rno,S_obj1[i].S_name,S_obj1[i].S_course,S_obj1[i].S_city);

    }

    printf("\n\n ============######$$$$$$#######$================= \n");


    getch();
    return 0;
}

