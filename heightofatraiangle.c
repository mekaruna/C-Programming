#include<stdio.h>
#include<conio.h>
void main()
{
	int b,h;
	float a;
	printf("Enter the base and height of traiangle:");
	scanf("%d %d",&b,&h);
	a=0.5*b*h;
	printf("Area of traiangle is % f",a);
	getch();
}
