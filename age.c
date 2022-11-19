#include<stdio.h>
#include<conio.h>
void main()
{
	int i,age,c=0;
	printf("Enter yhe age of the person:");
	scanf("%d",& age);
	for(i=1; i<=10;i++)
	{
		for(age>50 && age<60)
		{
			printf("%d",c);
			getch();
		}
	}
	
}
