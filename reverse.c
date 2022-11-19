#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,rem;
	printf("Enter a three digit number:");
	scanf("%d",& n);
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	printf("The reverse is %d",rev);
	getch();
}
