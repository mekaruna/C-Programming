#include<stdio.h>
#include<conio.h>
void main()
{
	int sal,bonus,bn=0;
	char c;
	printf("Enter m for male f for female:") 
	scanf("%d",&c);
	if(c=='m')
	{
		printf("Enter the salary of the male:");
		scanf("%d",& sal);
		
		if(sal<10000)
		{
			bn=sal*0.02;
		}
		bonus=sal+(sal*0.05);
		printf("The salary is %d",bonus+bn);
	    }
	    else if(c=='f')
	    {
	    	printf("Enter the salary of the female:");
	    	scanf("%d",& sal);
	    	
	    	if(sal<10000)
	    	{
	    		bn=sal*0.02;
			}
			
			bonus=sal+(sal*0.1);
			printf("The salary is %d",bonus+bn);
		}
		else{
			printf("Invalid choice! choose m or f");
		}
		return 0;
	
	
}
