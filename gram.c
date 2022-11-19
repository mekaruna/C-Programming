#include<stdio.h>
#include<conio.h>
void main()
{
	int gm,kg;
	printf("Enter the weight in gram:");
	scanf("%d",&gm);
	kg=gm/1000;
	gm=gm%1000;
	printf("%dkg and %dgram",kg,gm);
	getch();
}
