#include<stdio.h>
#include<conio.h>
void main()
{
	int ic;
	float nc;
	printf("Enter the selling price in Indian currency:");
	scanf("%d",&ic);
	nc=ic*1.6;
	printf("The selling price in Nepali currency is %f",nc);
	getch();
}
