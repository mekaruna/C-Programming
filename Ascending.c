#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,j,temp,size;
	printf("\nEnter the number of elements in an array:")
	scanf("%d", & size);
	printf("\nEnter %d elements of an array \n", size);
	for(i=0, i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Array of elementgs in Ascending order are \n");
	for(i=0; i<size; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
