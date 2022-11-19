#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	printf("Enter the number and sum of all integer between 100 and 200, divisible by 7 but not by 5:\n");
	for(i=100; i<200; i++)
	{
		if(i%7==0)
		{
			cout<<" "<< i;
			sum +=i;
		}
		cout << "\n The sum :<< sum << end1;
	}
}
