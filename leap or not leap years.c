#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	printf("Enter any y:");
	scanf("%d",& y);
	if(y%4==0)
	{
		if (y%100==0)
		{
			if (y%400==0)
			
				printf("%d leap year",y);
			
			else
			
				printf("%d not a leap year",y);
			}
			else
			{
				printf("%d is leap year",y);
			}
		}
			else
			
				printf("%d is not a leap year",y);
			}
		}
			
		
	
 }
