#include <stdio.h>

int main()
{
	char letter;
	printf("Please enter a letter");
	scanf("%c", &letter);
	
	if(letter=='a'| letter=='A') {
		printf("Vowel\n");
	}
	
	else if(letter=='i'| letter=='I') {
		printf("Vowel\n");
	}
	else if(letter='u'| letter=='U') {
		printf("Vowel\n");
	}
	else if(letter=='e'| letter=='E') {
		printf("Vowel\n");
	}
	else if(letter=='o'| letter=='O') {
		printf("Vowel\n");
	}
	else {
	printf("Consonant\n");
	}
	return 0;
}
