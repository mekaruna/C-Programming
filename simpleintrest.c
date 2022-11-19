#include<stdio.h>
void main()
{
	float p,t,r,SI;
	printf("Enter the value of p,t,r:");
	scanf("%f %f %f", &p, &t,&r);
	SI=(p*t*r)/100.0;
	printf("The simple intrest is %.2f", SI);
	
}
