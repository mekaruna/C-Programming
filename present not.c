#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,m,flag=0;
  int a[10][10];
 clrscr();

 printf("How many elements you want to enter n");
 scanf("%d",&n);

 printf("Enter element in the array n");
 for (i=0; i<n; i++)
 scanf("%d", &a[i]);

 printf("Enter the element you want to search n");
 scanf("%d", &m);

 for (i=0; i<n; i++)
  {
   if(a[i]==m)
   {
   flag=1;
   break;
   }
  }
 if(flag==0)
  printf("Not present");
 else
  printf("Present");
 getch();
}
