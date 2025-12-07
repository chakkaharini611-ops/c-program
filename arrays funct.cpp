#include<stdio.h>
void display(int []);
main()
{
	int marks[]={98,73,87,95};
	display(marks);
}
void display(int marks[])
{
	int i;
	printf("the marks are :\n");
	for (i=0;i<4;i++)
	printf("%d\n",marks[i]);
}
