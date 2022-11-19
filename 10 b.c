#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	printf("Enter the number of day:");
	scanf("%d",& choice);
	switch(choice)
	{
		case 1:
			printf("The day you've chosen in sunday");
			break;
	    case 2:
		    printf("The day you've chosen in monday");
			break;
		case 3:
		    printf("The day you've chosen in Tuesday");
			break;
	    case 4:
		    printf("The day you've chosen in wednesday");
			break;
		case 5:
		    printf("The day you've chosen in Thursday");
			break;
		case 6:
		    printf("The day you've chosen in Friday");
			break;
		case 7:
		     printf("The day you're chosen in saturday");
			 break;
		default:
		     printf("invalid option given");	 						 		
	}
	getch();
}
