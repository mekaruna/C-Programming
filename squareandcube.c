#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sqr,cube;
	printf("Enter a number:");
	scanf("%d",&a);
	sqr=a*a;
	cube=sqr*a;
	printf("The square of number is %d\n",sqr);
	printf("The cube of number is %d",cube);
	getch();
}
