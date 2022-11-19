#include<stdio.h>
#include<conio.h>
void main()
{
	int sal,tax;
	printf("Enter a salary of a employee:");
	scanf("%d",& sal);
	if(sal<=400000)
	{
		tax=sal*0.01;
		printf("The declared tax for %d salary is %d.\nThe actual amount recived by the employee is %d",sal,tax,sal-tax);
	}
	else if(sal>400000 && sal<=500000)
	{
		tax=sal*0.1;
		printf("The declaared tax for %d salary is %d.\nThe actual amount recived by the employee is %d",sal,tax,sal-tax);
	}
	else if(sal<0)
	{
		printf("The salary goes less then zero.");
	}
	else{
		tax=sal*0.2;
		printf("The declared tax %d salary is %d.\nThe actual amount recived by the employee is %d",sal,tax,sal-tax);
	}
	return 0;
}
