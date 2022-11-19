#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter any two number:");
	scanf("%d %d",&n1,&n2);
	n1>n2? printf("The difference is %d",n1-n2): printf("The sum is %d",n1+n2);
}
