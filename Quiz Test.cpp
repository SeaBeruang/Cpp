#include<stdio.h>

int main()
{
	int a=20, x;
	for(x=1;x<=6;x++)
	{
		printf("%d ", a);
		a-=6;
	}
	return 0;
}
