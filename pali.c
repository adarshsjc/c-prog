#include <stdio.h>
int numpalindrome(int num)
{
  int remainder , orgnumber , revnumber;
  orgnumber = num;
  revnumber = 0;
while (num!=0)
{
  remainder = num%10;
  revnumber = revnumber*10+remainder;
  num=num/10;
}
if (orgnumber==revnumber)
{
  return 1;
}
else
  {
    return 0;
  }
}
int main()
{
int num , custom ;
printf("Enter a number:");
scanf("%d",&num);
custom=numpalindrome(num);
if(custom==1)
{
printf("%d is a palindrome number \n",num);
}
else 
{
printf("%d is not a palindrome number \n",num);
}
return 0;
}


  
