#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
	int a,c,r;
	printf("\n Enter the value of radius:");
	scanf("%d",&r);
	a=PI*r*r;
	printf("\n Area of circle=%d",a);
	c=2*PI*r;
	printf("\n circumference=%d",c);
	getch();
}
