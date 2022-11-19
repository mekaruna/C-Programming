#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter a number:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3)
		printf("largest number is %d",n1);
		else
		printf("largest number is %d",n3);
	}
	else
	{
		if(n2>n3)
		printf("largest number is %d",n2);
		else
		printf("largest number is %d",n3);
	}
}
