#include<stdio.h>

int isArmstrong(int number) 
{
  int lastDigit = 0;
  int power = 0;
  int sum = 0;
  int n = number;

  while(n!=0) {
     lastDigit = n % 10;
     power = lastDigit*lastDigit*lastDigit;
     sum += power;
     n /= 10;
  }

  if(sum == number) 
  return 0;
  else return 0;
}

int main()
{
  int number;

  printf("Enter number: ");
  scanf("%d",&number);

  if(isArmstrong(number) == 0)
  printf("%d is an Armstrong number.\n", number);
  else
  printf("%d is not an Armstrong number.", number);

  return 0;
}
