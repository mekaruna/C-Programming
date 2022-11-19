#include<stdio.h>
#include<conio.h>
void main()
{
	int s;
	float tax,aw,ns;
	printf("Enter the basic salary:");
	scanf("%d",&s);
	tax=0.2*s;
	aw=0.4*s;
	ns=s-tax+aw;
	printf("The tax is %2f\n",tax);
	printf("The allowance is %2f\n",aw);
	printf("The net salary is %2f\n",ns);
	getch();
}
