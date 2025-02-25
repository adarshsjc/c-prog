#include <stdio.h>
int main ()
{	
	char str[100],temp;
	int len,i,j;
	printf("Enter the string:");
	scanf("%[^\n]",str);
for (len=0;str[len]!='\0';len++);
i=len-1;
	for(j=0;j<len/2;j++,i--)
	{
	temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	
	}
printf("The revrsed string is: %s",str);
return 0;
}

	
           






















