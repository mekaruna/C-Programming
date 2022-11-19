#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping\n");
	printf("a=%d b=%d",a,b);
	getch();
}
