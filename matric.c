#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i;j;
	printf("Enter element of matrix")
	for(i=0; i<3; i++)
	{
		for(j=0; i<3; j++)
		{
			scanf("%d\t",&a[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\n");
}
