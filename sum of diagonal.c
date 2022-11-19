#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows,columns,a[10][10],sum=0;
	printf("\nEnter numbers of rows and columns:");
	scanf("%d %d",&i,&j);
	printf("\nEnter the matrix elements\n");
	for(rows=0; rows<i; rows++)
	{
		for(columns=0; columns<j; columns++)
		{
			scanf("%d",&a[rows][columns]);
		}
	}
	for(rows=0; rows<i; rows++)
	{
		sum=sum+a[rows][rows];
	}
	printf("\n The sum of Diagonal Elements of a matrix =%d",sum);
	return 0;
}
