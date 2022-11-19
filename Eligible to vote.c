#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter your age:");
	scanf("%d",& a);
	if(a>=18)
	{
		printf("Your are eligible to vote");
	}
	else{
		printf("your are not eligible to vote");
	}
}
