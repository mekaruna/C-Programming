#include<stdio.h>
#include<conio.h>
void main()
{
	char n[100];
	int i,flag=0, count=0;
	printf("Enter a line:");
	gets(n);
	for(i=0; n[i]!='/o'; i++)
	{
		if(n[i]== 'a'|| n[i]=='e'|| n[i]=='i'|| n[i]=='o'|| n[i]=='u'|| n[i]=='A'|| n[i]=='E'|| n[i]=='I'|| n[i]=='O'|| n[i]=='U')
		{
			flag++;
			
		}
		else
		{
			count++;
			
		}
	}
	printf("There are %d vowels.", flag);
	printf("There are %d consonats.", count);
}
