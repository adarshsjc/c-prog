#include <stdio.h>
int main()
{
	int n,i=1;
	printf("Enetr the number:");
	scanf("%d",&n);
	printf("The fators of the given number  %d is \n",n);
	
while(i<=n)
{
 
 	if (n%i==0)
 {
	 printf("%d\n",i);
 }
	 i++;
}
return 0;
} 
	

