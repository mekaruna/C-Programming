#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	n>0? printf("The number is positive."):
	n<0? printf("The number is negative."):
	printf("The number is zero.");
}
