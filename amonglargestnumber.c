#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a a&b:");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		printf("largest number is %d", a);
	}
	else
	{
		printf("largest number is %d", b);
	}
}
