#include<stdio.h>
#include<conio.h>
void main()
{
	int h,w,l,v;
	clrscr();
	printf("Enter value of length:");
	scanf("%d",& l);
	printf("Enter value of height:");
	scanf("%d",& h);
	printf("Enter value of width:");
	scanf("%d",& w);
	v=h*w*l;
	printf("Volume=%d", v);
	getch();
}
	
