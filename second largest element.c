#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i,max1,mx2;
	printf("Enter five numbers:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	max1=max2=0;
	for(i=0; i<5; i++)
	{
		if (a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if (a[i]>max2 &&a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("second largest element is %d",max2)
}
