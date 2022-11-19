#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",& num);
	if(num>0)
	{
		printf("Number is positive");
	}
	if(num<0)
	{
		printf("Number is negative");
	}
	if(num==0)
	{
		printf("Number is zero");
	}
	return 0;
}
