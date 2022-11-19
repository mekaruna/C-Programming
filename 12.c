#include<stdio.h>
#include<conio.h>
void main()
{
	int number,reminder,sum=0;
	
	printf("Enter the number:");
	scanf("%d",& number);
	 
	while(number>0)
	{
		reminder=number%10;
		sum=sum+reminder;
		number=number/10;
	 }
	 
	 printf("\n sum of the digits of given number=%d",sum);
     
	 return 0; 
}
