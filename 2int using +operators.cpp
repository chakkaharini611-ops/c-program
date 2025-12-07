#include <stdio.h>
int main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	while(b>0){
		a++;
		b--;
	}
	printf("sum=%d",a);
	return 0;
}
