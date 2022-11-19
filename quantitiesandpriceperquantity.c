#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,tp;
//	clrscr();
	printf("Enter the quantities:");
	scanf("%d",&a);
	printf("Enter the price per quantity:");
	scanf("%d",&b);
	tp=a*b;
	printf("The total price is %d",tp);
	getch();
}
