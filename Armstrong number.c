#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=100,rem,sum;
	printf("Enter a Armstrong numbers")
	scanf("%d",& num);
	while(count<=500)
	{
		num=count;
		sum=0;
		
		while(num)
		{
			rem=num%10;
			sum=sum+(rem*rem*rem);
			num=num/10;
			
		}
		if(count==sum)
		{
			printf("%d is a Armstrong number\n",count);
			
		}
		count++;
	}
	return 0;
}
