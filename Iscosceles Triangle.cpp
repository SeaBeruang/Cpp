#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c
	
	printf(":: This is a Triangle-identifyer Programme ::\n");
	printf(":: Please read :\n");
	printf("   This program works by identifying the shape of triangle whether it's Iscosceles, Scalene, or Equilateral.\n");
	printf("\n\n");
	
	printf("Please enter 3 sides of the triangle : ");
	scanf("%d, %d, %d", &a, &b, &c);
	
	if(&a == &b | &a == &c | &b == &c)
	{
		printf("\nThis is a Equilateral Triangle, the Iscosceles triangle is a triangle which sides have the same length as one another.");
	}
	
	else if (&a == &b | &a == &c)
	{
		printf("\nThis is a Iscosceles Triangle, the Iscosceles triangle is a triangle which only have 2 sides that have the same length as one another.");
	}
	
	else
	{
		printf("\nThis is a Scalene Triangle, the Scalene triangle is a triangle which sides does not have the same length as one another.");
	}
	
	getch();
	return 0;
}
