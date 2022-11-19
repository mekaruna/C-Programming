#include<stdio.h>
#include<conio.h>
void main()
{
	int p1,p2,p3;
	float avg;
	printf("Enter the age of three people:");
	scanf("%d%d%d",&p1,&p2,&p3);
	avg=(float)(p1+p2+p3)/3;
	printf("The average age is %2f",avg);
	getch();
}
