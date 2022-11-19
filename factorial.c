#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact,i;
	printf("Enter a number");
	scanf("%d",&n);
	fact=1;
	if(n<0)
	printf("factorial of that numbers");
	else
	{
		for(i=n; i>0; i--)
		{
			fact=fact*i;
		}
		printf("factorial=%d",fact);
	}
	getch();
}
