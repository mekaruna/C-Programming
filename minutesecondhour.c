#include<stdio.h>
#include<conio.h>
void main()
{
	int hr,min,sec;
	printf("Enter the time in hour:");
	scanf("%d",&hr);
	min=hr*60;
	sec=min*60;
	printf("The time in minute is %d\n",min);
	printf("The time in second is %d\n",sec);
	getch();
}
