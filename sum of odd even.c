#include<stdio.h>
#include<conio.h>
void main()
{
	int even=0;
	int odd=0;
	for(i=1; i<=100; i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
	}
	printf("sum of even is %d\n",even);
	printf("sum of odd is %d",odd);
	return 0;

}
