#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter all the elements:");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	printf("\nsum of all elements= %d",sum);
	getch();
	return 0;
	
}
