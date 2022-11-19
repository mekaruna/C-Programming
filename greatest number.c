#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter any two numbers:");
	scanf("%d %d",&n1,&n2);
	n1>n2? printf("%d is greatest.",n1): printf("%d is greatest.",n2);
}
