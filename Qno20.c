#include<stdio.h>
void name_static();
void name_static(int a);
void main()
{
	int i=1;
	printf("using static:");
	name_static();
	printf("Enter a number:");
	printf("using non static:");
	name non static(i);
	return 0;
}
void name static()
{
	static int count=1;
	printf("Enter a number:");
	count++;
	while(count<=10)
	{
		name sttic();
		
	}
}
void name non static(int a)
{
	printf(Enter a number);
	if(a<10)
	{
		name non static(a+1);
	}

}
