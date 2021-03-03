#include <stdio.h>
#include <conio.h>

void *strstrX(char *Src, char *Cmp)
{
	char *Temp = NULL;
	char *str = Cmp;

	while (*Src != '\0')
	{
		//Temp = Src;
		Cmp = str;
		if (*Src == ' ')
		{
			/* code */
			Src++;
			continue;
		}

		//Temp = Src;

		while (*Src != ' ')
		{
                Temp = Src;
                if (*Temp == *Cmp && *Cmp != '\0')
                {
                    /* code */
                    //Temp = Cmp;

                    Cmp++;
                }
			 Src++;
        }

		Src++;
}

	if (Temp != NULL)
	{

		//Temp = NULL;
		return Temp;
	}
	else
	{
		return Temp;
	}
      // return Temp;

}

int main()
{
	char Src[40] = "";
	char Cmp[40] = "";
	char *Temp = NULL;

	printf("\n Enter a String To Compare the Word =>");
	gets(Src);

	printf("\n Enter Word to Compare the String =>");
	gets(Cmp);

	Temp = strstrX(Src, Cmp);

	if(Temp == NULL)
    {
         printf("\n String Is Not Substring Of Given I/P String");
    }
    else
    {
          printf("\n String Is  Substring Of Given I/P String");
    }

	//(Temp == NULL) ? printf("\n String Is Not Substring Of Given I/PString") : printf("\n String Is  Substring Of Given I/PString");

	getch();

	return 0;
}


