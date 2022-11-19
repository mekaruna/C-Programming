#include<stdio.h>
#include<conio.h>
void main()
{
	int a7;
	printf("Enter a character:");
	scanf("%c",& a7);
	if(a7>'a' && a7<='b')
	{
		printf("The uppercase of %c",a7,a7-32);
	}
	else{
		printf("The lowercase of %c",a7,a7+32);
	}
}
