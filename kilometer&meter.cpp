#include<stdio.h>
int main()
{
	float cm,m,km;
	printf("enter length in centimeter");
	scanf("%f",&cm);
	m=cm/100.0;
	km=cm/100000.0;
	printf("length in meter: %2fm\n",m);
	printf("length in kilometer:%5fkm\n",km);
}
