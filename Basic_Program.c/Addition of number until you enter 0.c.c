/// ///////////////////////////////////////////////
///Addition of Number until user not Enters 0 value
/// ///////////////////////////////////////////////


#include<stdio.h>
#include<conio.h>

int main()
{

    int No=0,Sum=0;

    printf("\n =================***$$$$$$$$$$$$$***================= \n\n");

    printf("\n Enter to do Addition (Enter 0 to Stop)=> \n ");

    while(1)
    {
        scanf("%d",&No);

        if(No<=0)
        {
            break;
        }

        Sum=Sum+No;
    }

    printf("\n Given Addition is => %d .",Sum);

    printf("\n\n ================***$$$$$$$$$$$$$$***================= \n");

    getch();
    return 0;
}
