#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,tm;
	float p;
	printf("Enter the marks obtained in subject1:");
	scanf("%d",&s1);
	printf("Enter the marks obtained in subject2:");
	scanf("%d",&s2);
	printf("Enter the marks obtained in subject3:");
	scanf("%d",&s3);
	printf("Enter the marks obtained in subject4:");
	scanf("%d",&s4);
	printf("Enter the marks obtained in subject5:");
	scanf("%d",&s5);
	tm=s1+s2+s3+s4+s5;
	p=(float)(tm/5);
	printf("\"subject\"\t\marks\"");
	printf("\n------\t\----");
	printf("\n subject1\t\%d\n",s1);
	printf("\n subject2\t\%d\n",s2);
	printf("\n subject3\t\%d\n",s3);
	printf("\n subject4\t\%d\n",s4);
	printf("\n subject5\t\%d\n",s5);
	printf("The total marks is %d\n",tm);
	printf("The percentage is %2f\n",p);
	getch();
}
