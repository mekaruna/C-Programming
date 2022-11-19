#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	float average;
	printf("Enter any three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	Average=(float)(n1+n2+n3)/3;
	printf("The average is %f",average);
	getch();
}
