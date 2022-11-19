#include<stdio.h>
#include<conio.h>
void main()
{
	int h,w,l,v;
	printf("Enter the value of length:");
	scanf("%d",&l);
	printf("Enter the value of height:");
	scanf("%d",&h);
	printf("Enter the value of width:");
	scanf("%d",&w);
	v=h*w*l;
	printf("Volume=%d",v);
	getch();
}
