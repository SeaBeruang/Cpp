#include <stdio.h>
#include <ctype.h>
int main()
{
	char masukin;
	printf("Enter a character: \n");
	scanf("%c",&masukin);
	if (islower(masukin)==0)
	{
		printf("\n That is not a lowercase\n");
		printf("\n Converted to be a lowercase: %c", tolower(masukin));
	}
	else
	{
		printf("\n That is a lowercase. ");
	}
	getch();
	return 0;
}
