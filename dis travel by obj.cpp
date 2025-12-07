//distance travelled by object
#include<stdio.h>
main()
{
	float u,t,a,d;
	printf("enter the value u");
	scanf("%f",&u);
	printf("enter the value t");
	scanf("%f",&t);
	printf("enter the value a");
	scanf("%f",&a);
	d=u*t+0.5*a*t*t;
	printf("the distance travelled by the object is %f",d);
	}
