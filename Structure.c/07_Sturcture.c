
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

                struct Stud S_obj1,S_obj2;

                //Accepting Student Information

                printf("\n\t Enter 1st Student Detail => \n");

                printf("\n Enter Student R_No => ");
                scanf("%d",&S_obj1.S_rno);

                printf("\n Enter Student Name => ");
                scanf(" %s",S_obj1.S_name);

                printf("\n Enter Student Course => ");
                scanf("%s",S_obj1.S_course);


                printf("\n Enter Student City => ");
                scanf("%s",S_obj1.S_city);

                printf("\n\t Enter 2nd Student Detail => \n");

                printf("\n Enter Student R_No => ");
                scanf("%d",&S_obj2.S_rno);

                printf("\n Enter Student Name => ");
                scanf("%s",S_obj2.S_name);

                printf("\n Enter Student Course => ");
                scanf("%s",S_obj2.S_course);


                printf("\n Enter Student City => ");
                scanf("%s",S_obj2.S_city);

                system("cls");

                printf("\n\n ============######$$$$$$#######$================= \n");

                //Displaying 1st Student InformationS

                printf("\n\t Displaying 1st Student Details => \n");
                printf("\n Roll_no => %d. \n Name => %s. \n Course => %s. \n City => %s \n\n",S_obj1.S_rno,S_obj1.S_name,S_obj1.S_course,S_obj1.S_city);

                //Displaying 2nd Student InformationS

                printf("\n\t Displaying 1st Student Details => \n");
                printf("\n Roll_no => %d. \n Name => %s. \n Course => %s. \n City => %s \n\n",S_obj2.S_rno,S_obj2.S_name,S_obj2.S_course,S_obj2.S_city);


                getch();
                return 0;
}

