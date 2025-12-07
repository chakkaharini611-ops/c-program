#include<stdio.h>
int main()
{
	int r;
	float area,pi=3.14159;
	printf("enter the radius");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area of the circle,%2f",area);
	return 0;
}
