#include <stdio.h>
int main()
{
    int i,min,max,p1,p2,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for (i=0;i<n;i++)
     {
       scanf("%d",& a[i]);
     }
   max=a[0];
   min=a[0];
    for (i=1;i<n;i++)
      {
        if (a[i]>max)
         {
           max= a[i];
           p1=i;
         }
        if (a[i]<min)
          { 
            min= a[i];
            p2=i;
          }
       }
       
   printf("maximum value is %d and is at %d\n",max,p1);
   printf("minimum value is %d and is at %d\n",min,p2);
return 0;
}   
