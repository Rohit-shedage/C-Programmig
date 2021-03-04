#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Product
{
     int P_id;
     char P_name[20];
     float P_sale;
     float P_purchase;
};

int main()
{
       struct Product P_obj1,P_obj2;
        int i=0;
       //Accepting 1st Product

        printf("\n Enter Product Id =>");
        scanf("%d",&P_obj1.P_id);

        printf("\n Enter Product Name =>");
        scanf("%s",&P_obj1.P_name);

        printf("\n Enter Product sales =>");
        scanf("%f",&P_obj1.P_sale);

        printf("\n Enter Product Purchase =>");
        scanf("%d",&P_obj1.P_purchase);

       //Accepting 2nd Product
        printf("\n Enter Product Id =>");
       scanf("%d",&P_obj2.P_id);

       printf("\n Enter Product Name =>");
       scanf(" %s",&P_obj2.P_name);
       //scanf("%[^\n]",&P_obj2.P_name);
       //gets(P_obj2.P_name);

       printf("\n Enter Product Sales =>");
       scanf("%f",&P_obj2.P_sale);

       printf("\n Enter Product Purchase =>");
       scanf("%d",&P_obj2.P_purchase);

       //Displaying 1st Product Detail

       printf("\n id = %d \n Name = %s \n Sales = %f \n Purchase = %f",P_obj1.P_id,P_obj1.P_name,P_obj1.P_sale,P_obj1.P_purchase);

       printf("\n id = %d \n Name = %s \n Sales = %f \n Purchase = %f",P_obj2.P_id,P_obj2.P_name,P_obj2.P_sale,P_obj2.P_purchase);

        getch();
        return 0;
}
