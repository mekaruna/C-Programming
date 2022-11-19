#include<stdio.h>
void main()
{
	int a[3][3],i,j;

    printf("3x3 Matrix : ");



   for(i=0;i<=2;i++)
    {
    
    for(j=0;j<=2;j++) 
	{
        
        printf("\nEnter element at location %d,%d : ",i+1,j+1);
        scanf("%d",&a[i][j]);
        
         
    }

}
 printf("\n\n 3x3 matrix : \n\n");



   for(i=0;i<=2;i++)
   {
    
    for(j=0;j<=2;j++)
	 {
        
        printf("%d",a[i][j]);
         
    }
    
    printf("\n");

   }
}




