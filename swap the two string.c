#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50];
	
	printf("Enter a character:");
	gets(a);
	printf("Enter a character:");
	gets(b);
	strcat(a,b);
	printf("Result:");
	puts(a);
	
}

