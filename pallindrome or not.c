#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,digit,num;
	printf("Enter a number:");
	scanf("%d",& n);
	num=n;
	while(n!=0)
	{
		digit=n%10;
		rev=rev+digit;
		n=n/10;
	}
	if(rev==num)
	printf("The number is pallindrome");
	else{
		printf("The number is not a pallindrome");
	}
	return 0;
}
