#include <stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,k;
	printf("enter 4 element of matrix A");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 4 element of matrix B");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
		{
			c[i][j]= c[i][j]+a[i][j]*b[i][j];
		}
	}
	}
	printf("the matrix multiplication is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
