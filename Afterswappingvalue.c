#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a & b:");
	scanf("% %", & a,&b);
	printf("Before swapping:\n", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:\n");
	printf("%d\t %d\n", a,b);
}
