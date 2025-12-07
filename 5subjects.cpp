#include<stdio.h>
main()
{
	int a,b,c,d,e,total;
	printf("enter a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	printf("total is %d",total);
	 float average=(float)a+b+c+d+e/5;
	printf("average is %f",average);
}
