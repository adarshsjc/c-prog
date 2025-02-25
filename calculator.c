#include <stdio.h>
 int main()
{
int num1,num2;
float div,mod,sum,subtract,multi;
printf("Enter the numbers");
scanf("%d%d",&num1,&num2);
char op;
printf("Enter the operator");
scanf(" %c",&op);
  switch(op)
  {
  case '+':
          sum=num1+num2;
          printf("%f,The sum of the two numbers",sum);
          break;

  case'-':
          subtract=num1-num2;
          printf("%f,The diffference of two numbers is",subtract);  
          break;

  case'*':
          multi=num1*num2;
          printf("%f,The product of two numbers is",multi);
          break;

  case'/':
           
          if (num2==0)
          {
             printf(" invalid");
          }

          else
        { div=num1/num2;
            printf("%f,THE first number divided by the second number",div);
          }
            break;
  case'%':
          mod=num1%num2;
          printf("%f,The modulus of num1 with num2",mod);
          break;
          default:
              printf("Invalid");

        }
return 0;
}
