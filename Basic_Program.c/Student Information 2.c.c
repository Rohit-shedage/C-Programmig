                     //////////////////////////////////////////////////////////////////////////////////////////////
                     //////////***Program For Student Information Record.***//////////
                    ///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
            int roll_no=0;
            char s_name[60],s_course[20],s_city[20];
            unsigned long long int mob_no=0;
            float pert=0.0;

            printf("\n ==========***STUDENT INFORMATION***======================= \n");

            printf("\n Enter Student Roll_No => ");
            scanf("%d",&roll_no);

            printf("\n Enter Student Name => ");
            scanf("%s",&s_name);

            printf("\n Enter Student Course => ");
            scanf("%s",&s_course);

            printf("\n Enter Student City  => ");
            scanf("%s",&s_city);

            printf("\n Enter Student Mobile Number =>");
            scanf("%llu",&mob_no);

            printf("\n Enter Student Percentage  =>");
            scanf("%f",&pert);

            system("cls");

            printf("\n ==========***STUDENT INFORMATION***======================= \n");

            printf("\n Roll_no       = %d    \n\t\n Name          = %s     \n\t\n Course        = %s   \n\t\n City          = %s   \n\t\n Mobile number = %llu   \n\t\n Percentage    = %2.2f \n",roll_no,s_name,s_course,s_city,mob_no,pert);

            printf("\n ==========***STUDENT INFORMATION***=======================\n");

            getch();
            return 0;
}
