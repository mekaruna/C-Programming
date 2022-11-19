#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	printf("enter a number");
	scanf("%d",& number);
	if(number%2==0)
	{
		printf("%d is even number", number);
	}
	else
	{
		printf("%d is odd number", number);
	}
}
