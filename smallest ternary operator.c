#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,small;
	printf("Enter three number");
	scanf("%d %d %d,&a,&b,&c");
	small=(a<b)? (a<c?a:c):(b<c?b:c);
	printf("\n smallest =%d",small);
	getch();
	return 0;
}
