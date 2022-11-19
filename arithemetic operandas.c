#include<stdio.h>
#include<conio.h>
void main()
{
	int operator;
	float num1,num2;
	printf("Enetr two numbers as operands\n");
	scanf("%f",&num1,&num2);
	printf("Enter an arithmetic operator(+,-,*,/,%,),\n");
	scanf("%*c%",& operator);
	switch(operator)
	{
		case '+':
			printf("%.2f + %.2f=%.2f",num1,num2,num1+num2);
			break;
	}
}
