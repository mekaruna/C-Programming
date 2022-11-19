#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("\n");
		}
		return 0;
	}
}
