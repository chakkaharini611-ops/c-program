//conversion of fahrenheit to celsius and vice versa
#include<stdio.h>
main()
{
	float c,f,newf,newc;
	printf("enter the temp in celsius");
	scanf("%f",&c);
	newf=c*1.8+32;
	printf("the temp in farenheit is %f\n",newf);
	printf("enter the temp in farenheit");
	scanf("%f",&f);
	newc=(f-32)/1.8;
	printf("enter temp in celsius is %f",newf);
}
