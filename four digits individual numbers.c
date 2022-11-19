#include<stdio.h>
void main()
{
	int n,rem;
	printf("Enter a four digits numbers:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10
		if(rem==1)
		{
			printf("one\t");
			
		}
		else if(rem==2)
		{
			printf("two\t");
		}
		else if(rem==3)
		{
			printf("three\t");
		}
		else if(rem==4)
		{
			printf("four\t");
			
		}
		else if(rem==5)
		{
			printf("five\t");
		}
		else if(rem==6)
		{
			printf("six\t");
		}
		else if(rem==7)
		{
			printf("seven\t");
			
		}
		else if(rem==8)
		{
			printf("eight\t");
			
		}
		else if(rem==9)
		{
			printf("nine\t");
		}
		else if(rem==0)
		{
			printf("zero\t");
		}
	
}
