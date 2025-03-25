#include <stdio.h>
int main()
{
   int i,sum=0,a[100],n,avg=0;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   printf("Enter the elements:\n");
   for (i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   	sum+=a[i];
   	
   }
   
      avg=sum/n;
    
    printf("The avg is %d",avg);
     return 0;
     
   }  
