#include<stdio.h>
#include<conio.h>
void main()
{
	 int input;
	 printf("1.save\n");
	 printf("2.open\n");
	 printf("3.exit\n");
	 printf("4.terminate\n");
	 printf("5.selection:");
	 scanf("%d",&input);
	 switch(input)
	 {
	 	case 1:
	 		save();
	 		break;
	 		case 2:
	 			open();
	 			break;
	 			case 3:
	 				exit();
	 				break;
	 				case 4:
	 				printf("Thanks for input\n");
	 				break;
	 				defult:
	 					printf("Bad input,quitting\n");
	 					break;
    	}
	 				
	 				
	 }
	 getch();
}
