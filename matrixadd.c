#include <stdio.h>
int main()
{
int r1,r2,col1,col2,n,i,j,a[10][10],b[10][10],c[10][10];
printf("enter the number of rows and columns of the first matrix:");
scanf("%d%d",&r1,&col1);
printf("Enetr the number of rows and columns in the second matrix:");
scanf("%d%d",&r2,&col2);
if(r1==r2 && col1==col2)
{
printf("Enter the elements of the first matrix:");
for (i=0;i<r1;i++)
{
 	for (j=0;j<col1;j++)
 	{
 		scanf("%d",&a[i][j]);
 	}
}
printf("Enetr the elements of the second matrix:");
for (i=0;i<r1;i++)
{
 	for (j=0;j<col1;j++)
 	{
 		scanf("%d",&b[i][j]);
 	}
}	
for (i=0;i<r1;i++)
{
 	for (j=0;j<col1;j++)
 	{
 		c[i][j]=a[i][j]+b[i][j];
 	}
 }
 printf("THE resultant matrix is:\n");
for (i=0;i<r1;i++)
{
 	for (j=0;j<col1;j++)
 	{
 	printf("%d\t",c[i][j]);
 	}
 	printf("\n");
 	}
 	}
else
{ 

printf("The matrix addition is not possible");
}

return 0;
}
 	
 	
 	
 	
