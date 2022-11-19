#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,sum,rem;
	printf("Enter a three dights number");
	scanf("%d", & a);
	rem=a%10;
	sum=sum+rem;
	a=a/10;
	rem=a%10;
	sum=sum+rem;
	a=a/10;
	rem=a%10;
	sum=sum+rem;
	printf("sum of three dight is % d",sum);
	getch();
