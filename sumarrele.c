#include <stdio.h>
int sum (int calc [] ,int n);
int main ()
{
int i,n , result ;
printf("size of the array :");
scanf("%d",&n);
int read [n];
printf("enter the elements");
for (i=0;i<n;i++)
{
  scanf("%d",&read[i]);
}


result = sum(read , n);
printf("The result is:%d",result);
return 0;
}
int sum(int calcu [],int n)
{
  int sum=0;
for (int i=0;i<n;i++)
{
  sum+=calcu[i];
}
return sum ;
}







