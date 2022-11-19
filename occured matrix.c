
#include<stdio.h>
#include<conio.h>
void main()
{
 
    int i;
 int arr1[] = {8, 3, 8, 5, 4, 3, 4, 3, 5};
 
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
    printf("The given array is :  ");

	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");
 
 printf("Number of odd number occur(s) : %d times.\n", findOddCountElem(arr1, ctr));
 return 0;
}
