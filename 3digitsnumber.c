#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,sum=0;
	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	printf("sum of three digit number is %d",sum);
	getch();
}
	
	
	
	
	
	
