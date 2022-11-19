#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,sq,sqc,pr,num;
	printf("\nEnter two number:")
	scanf("%d %d",&a,&b);
	
	sum=a+b;
	sq=(a*a)+(b*b);
	sqc=(a*a*a)+(b*b*b);
	pr=a*b;
	
	
	
	printf("sum:%d";sum);
	printf("sum of square:%d",sq);
	printf("sum of cubes:%d",sqc);
	printf("product:%d",pr);
	
	return 0;
}
