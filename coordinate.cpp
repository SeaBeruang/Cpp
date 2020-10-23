#include <stdio.h>
#include <math.h>

int main()
{
	float x1,x2,y1,y2;
	printf("input the coordinate (x1,y1) and (x2,y2) \n");
	scanf("(%f,%f) (%f,%f)", &x1,&y1,&x2,&y2);
	printf("%.2f", sqrt( pow (x2-x1,2)+ pow (y2-y1,2)));
	
	getch();
	return 0;
}
