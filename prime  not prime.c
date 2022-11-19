#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", & num);
	
	int count=0;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		count++;
		
	}
	if(count!=0)
	{
		printf("prime number\n");
	}
	else
	{
		printf("Not a prime number\n");
	}
	return 0;
}
