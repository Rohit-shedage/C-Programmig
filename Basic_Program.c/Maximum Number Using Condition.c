#include<stdio.h>
#include<conio.h>
main()
{
        int iNo1 = 0,iNo2 = 0;

        printf("\n Enter Two Number To Check Maximum From It =>");
        scanf("%d%d",&iNo1,&iNo2);

        //(iNo1>iNo2)?printf(" %d is Maximum then %d ",iNo1,iNo2):printf("%d is Maximum Then %d",iNo2,iNo1);
        //printf(" %d is Maximum Then ",(iNo1>iNo2)?iNo1:iNo2);


        if(iNo1>iNo2)
        {
                printf("\n %d is Maximum Then %d",iNo1,iNo2);
        }
        else
        {
                printf("\n %d is Maximum Then %d",iNo2,iNo1);
        }


        getch();
        return 0;

}
