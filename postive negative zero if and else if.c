#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("The number is positive.");
	}
	else if(n<0)
	{
		printf("The number is negative.");
	}
	else
	{
		printf("The number is zero.");
	}
}
