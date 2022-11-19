#include<stdio.h>
#include<conio.h>
void main()
{
	char a,num1;
	printf("Enter the character in lowercase:");
	scanf("%c",& a);
	num1=a-32;
	printf("The character in uppercase is:%c", num1);
	getch();
}


