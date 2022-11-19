#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	float s,area;
	printf("Enter the three sides of traiangle:");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=(float)(s*(s-a)*(s-b)*(s-c));
	printf("The area of traiangle is %2f",area);
	getch(
}
