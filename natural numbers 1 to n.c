#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the numbers:");
	scanf("%d",& n);
	printf("\nThe first %d natural numbers are:\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		sum=i;
	}
	printf("\nThe sum of natural numbers upto %d terms:%d \n",n,sum);
}
