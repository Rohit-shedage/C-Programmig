#include<stdio.h>
#include<conio.h>
main()
{
        int iNo1 = 0,iNo2 = 0;

        printf("\n Enter Two Number To Check Maximum From It =>");
        scanf("%d%d",&iNo1,&iNo2);

        (iNo1>iNo2)?printf(" %d is Maximum ",iNo1):printf("%d is Maximum",iNo2);


        getch();
        return 0;

}
