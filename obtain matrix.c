#include<stdio.h>

void main()
{
	int a[3][4],b[3][4],c[3][4],i,j;
	printf("Enter all the elements of A:");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter all elements of B:");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("The matrix of c is\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
