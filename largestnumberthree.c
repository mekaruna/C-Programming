#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the value of a,b,c,&d:");
	scanf("%d %d %d %d", &a, &b,&c,&d);
	if((a>b) && (a>c) && (a>d))
	{
		printf("largest number is %d", a);
	}
	else if ((b>a) && (b>c) && (b>d))
	{
		printf("largest number is %d:", b);
	}
	else if ((c>a) && (c>b) && (c>d))
	{
		printf("largest number is %d:", c);
	}
	else
	{
		printf("largest number is %d", d);
	}
}
