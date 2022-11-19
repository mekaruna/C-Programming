#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,rev=0, sum=0;
	printf("Enter a four digits number:");
	scanf("%d",&n);
	rem=n%10;
	rev=rev*10+rem;
	sum=sum+(rem*rem);
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	sum=sum+(rem*rem);
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	sum=sum+(rem*rem);
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	sum=sum+(rem*rem);
	n=n/10;
	printf("The sum of square of each number is %d", sum);
}
