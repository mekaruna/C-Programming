#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a& b:");
	scanf("%d  %d",  &a, &b);
	printf("Before swapping:\n");
	printf("a=% d\t b=%d", a, b);
	c=a;
	a=b;
	b=c;
	printf("After swapping %\n");
	printf("a=% d\t b=%d", a,b);
	
}
