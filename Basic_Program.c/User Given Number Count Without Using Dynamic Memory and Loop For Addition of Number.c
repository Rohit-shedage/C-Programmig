#include<stdio.h>
#include<conio.h>
typedef int Me;

Me main()
{
      Me iNo = 0,i = 0, cnt = 0,sum = 0;

      printf("\n\n ===========***$$$$***=============== \n");

      printf("\n Enter How Many Number to Count  =>");
      scanf("%d",&iNo);

      up:
      if(cnt<iNo)
      {
                  if(cnt == 0)
                  {
                         printf("\n Enter %dst Number =>",cnt+1);
                         scanf("%i",&i);
                  }
                  else if(cnt == 1)
                  {
                          printf("\n Enter %dnd Number =>",cnt+1);
                          scanf("%i",&i);
                  }
                  else if(cnt == 2)
                  {
                           printf("\n Enter %drd Number =>",cnt+1);
                           scanf("%i",&i);
                  }
                  else
                  {
                            printf("\n Enter %dth Number =>",cnt+1);
                             scanf("%i",&i);
                  }
           sum = sum + i;
           cnt++;
           goto up;

      }

      printf("\n Count of %d Numbers Addition is => %d.",iNo,sum);

      printf("\n\n ===========***$$$$***=============== \n");

      printf("\n Press any key to continue....!");

      getch();
      return 0;

}
