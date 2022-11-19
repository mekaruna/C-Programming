#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,tax=0.05;
	float ta;
	printf("Enter the amount:");
	scanf("%d",amount);
	ta=amount+tax*amount;
	printf("The total amount is %f",ta);
	getch();
}
