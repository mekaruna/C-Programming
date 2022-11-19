#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter any two numbers:");
	scanf("%d %d %d",&n1,&n2);
	if(n1>n2)
	{
		printf("The difference is %d",n1-n2);
	}
	else
	{
		printf("The sum is %d",n1+n2);
	}
}
