#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f,a,s,m,d,r;
	printf("Enter the first number:");
	scanf("%d",& f);
	printf("Enter the second number:");
	scanf("%d",& n);
	a=f+n;
	printf("Adition=%d\n",a);
	s=f-n;
	printf("substraction=%d\n",s);
	m=f*n;
	printf("multiplication=%d\n",m);
	d=f/n;
	printf("Division=%d\n",d);
	r=f%n;
	printf("modulus=%d\n",r);
	getch();
}
