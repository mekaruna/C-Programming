#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=0;
	printf("enter a number:")
	scanf("%d",&num)
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
	printf("prime");
	else
	printf("Not prime");
	getch();
}
