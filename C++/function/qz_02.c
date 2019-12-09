#include <stdio.h>

double CelToFah(double num)
{
	return 1.8 * num + 32;
}

double FahToCel(double num)
{
	return (num - 32) / 1.8; 
}

int main()
{
	int select;
	double num;
	printf("1.¼·¾¾¸¦ È­¾¾·Î \n");
	printf("2.È­¾¾¸¦ ¼·¾¾·Î \n");
	printf("¼±ÅÃ? ");
	scanf("%d", &select);

	switch(select)
	{
		case 1 : printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä.");
				 scanf("%lf", &num);
				 printf("º¯È¯µÈ È­¾¾: %f \n", CelToFah(num));
			 	 break;

		case 2 : printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä.");
				 scanf("%lf", &num);
				 printf("º¯È¯µÈ ¼·¾¾: %f \n", FahToCel(num));
				 break;
		
		default : printf("¿À·ù");
				  break;
	}
	return 0;	
}