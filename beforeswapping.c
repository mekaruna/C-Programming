#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=10;
	clrscr();
	printf("Before swapping \n");
	scanf("a=%d\tb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping \n");
	scanf("a=%d\tb=%d",a,b);
	getch();
}
