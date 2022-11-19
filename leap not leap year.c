#include<stdio.h>
#include<conio.h>
void main()
{
	int yr;
	printf("Enter a year ");
	scanf("%d",& yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			printf("It is leap year");
			else
			printf("It is not leap year");
		}
		else {
			printf("It is leap year");
		}
	}
	else
	printf("It is not leap year");
	return 0;
	
}
