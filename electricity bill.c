#include<stdio.h>
#include<conio.h>
void main()
{
	int cu;
	float ts;
	printf("Enter the consumption unit:");
	scanf("%d",& cu);
	if(cu>150)
	{
		ts=cu*3;
	}
	else if(cu<=151)
	{
		ts=100+(cu-150)*3.75;
	}
	else if(cu<=351)
	{
		ts=250+(cu-350)*4;
	}
	else
	{
		ts=300+(cu-450)*4.25;
	}
	printf("your total charge is %2f",ts);
	
}
