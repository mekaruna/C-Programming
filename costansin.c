#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
	int num;
	float deg;
	printf("Enter a number:");
	scanf("%d",&num);
	deg=num*(PI/180);
	printf("Degree=%2f\n",deg);
	printf("sin%2f=%2f\n",deg,sin(deg));
	printf("cos%2f=%2f\n",deg,cos(deg));
	printf("tan%2f=%2f\n",deg,tan(deg));
	getch();
}
