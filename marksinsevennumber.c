#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,s6,s7,tm;
	float p;
	printf("Enter marks in subject 1:");
	scanf("%d",& s1);
	printf("Enter marks in subject 2:");
	scanf("%d",& s2);
	printf("Enter marks in subject 3:");
	scanf("%d",& s3);
	printf("Enter marks in subject 4:");
	scanf("%d",& s4);
	printf("Enter marks in subject 5:");
	scanf("%d",& s5);
	printf("Enter marks in subject 6:");
	scanf("%d",& s6);
	printf("Enter marks in subject 7:");
	scanf("%d",& s7);
	tm=(s1+s2+s3+s4+s5+s6+s7);
	p=(float)(tm/7);
	if (p>80)
	{
		printf("Distination");
	}
	else if(p>60 && p<=79)
	{
		printf("First division");
	}
	else if(p>45 && p<=59)
	{
		printf("second division");
	}
	else if(p>32 && p<=44)
	{
		printf("Third division");
	}
	else if(p<31) 
	{
		printf("Fail");
    }
}
