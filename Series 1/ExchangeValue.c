#include<stdio.h>

void main()
{
	int x=10;
	int y=20;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x = %d \n y= %d",x,y);
}
