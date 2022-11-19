#include<stdio.h>
#include<conio.h>
void main()
{
	char n[100];
	int i,flag=0; count=0;
	printf("Enter a line:");
	gets(n);
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
		{
		flag++;
	
		}
		else
		{
			count++;
		}
		
	}
	printf("There are %d vowels.",flag);
	printf("There are %d consonats.",count);
}

			
		




