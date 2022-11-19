#include<stdio.h>
#include<conio.h>
void main()
{
	int mp;
	float dis=0.3,sp;
	printf("Enter the marked price of radio:");
	scanf("%d",&mp);
	sp=mp-dis*mp;
	printf("The actual selling price of radio is %2f",sp);
	getch();
}
