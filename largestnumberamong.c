#include<stdio.h>
void main()
{
	int a,b,c,d,h1,h2,h;
	printf("Enter the value of a,b,c &d:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	h1=(a>b)? a:b;
	h2=(c>d)? c:d;
	h=(h1>h2)? h1:h2;
	printf("The largest number is %d",h);
}
