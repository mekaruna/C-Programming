#include<stdio.h>
#include<conio.h>
void main()
{
	int g,kg;
	clrscr();
	printf("Enter weight in gram:");
	scanf("%d", & g);
	printf("%d gram="g);
	kg=g/1000;
	g=g%1000;
	printf("%d kg and %dg",kg,g);
	getch();
}
