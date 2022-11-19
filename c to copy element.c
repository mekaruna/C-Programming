#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,largest;
	printf("Enter ten elments:");
	for(i=0; i<5; i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0; i<10; i++)
	{
		if (a[i]>largest)
		{
			largest=a[i];
		}
	}
	printf("% largest=",largest);
}
