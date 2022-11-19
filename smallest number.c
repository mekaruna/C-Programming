#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,n4,x,y;
	printf("Enter any four number:");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	x=n1<n2? n1:n2;
	y=n3<n4? n3:n4;
	x<y? printf("The smallest number is %d",x): printf("The smallest number is %d",y);
}
