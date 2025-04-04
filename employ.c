#include <stdio.h>
struct employee {
char name[100];
int ID;
float salary;
};
int main()
{
  int n,i=0,j=0;
printf("Enter the number of employees:");
scanf("%d",&n);
struct employee employee[n];
for (i=0;i<n;i++)
{
  printf("Enter the details of employee %d \n",i+1);
  printf("name:\n");
  scanf("%s",employee[i].name);
  printf("ID:\n");
  scanf("%d",&employee[i].ID);
  printf("salary:\n");
  scanf("%f",&employee[i].salary);

}
// display output
printf("employee Details :\n");
for (i=0;i<n;i++)
{
  printf("Employee %d\n",i+1);
  printf("name:%s\n",employee[i].name);
  printf("ID:%d\n",employee[i].ID);
  printf("salary:%.2f\n",employee[i].salary);
}
return 0;
}

