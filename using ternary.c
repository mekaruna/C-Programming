#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,x,y;
	printf("Enter any three number:");
	scanf("%d %d %d",&n1,&n2,&n3);
	x=n1>n2? n1:n2;
	y=x>n3? printf("The largest number is %d",x): printf("The largest number is %d",n3);
	
}
