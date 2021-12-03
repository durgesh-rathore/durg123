#include<stdio.h>
int main()
{
int a[5][5],i,j,b[5][5],c[5][5],n1,m1,n2,m2;
printf("Enter how many row and columns in first matrix\n");
scanf("%d%d",&n1,&m1);
printf("Enter first matrix element \n");
for(i=0;i<n1;i++)
  {
   printf("Enter %d element of %d row\n",m1,i+1);
   for(j=0;j<m1;j++)
    {
      scanf("%d",&a[i][j]);
     }
 }
printf("Enter how many row and columns in first matrix\n");
scanf("%d%d",&n2,&m2);
printf("Enter second matrix element \n");
for(i=0;i<n2;i++)
  {
   printf("Enter %d element of %d row\n",m2,i+1);
    for(j=0;j<m2;j++)
      {
        scanf("%d",&b[i][j]);
      }
   }
printf("First matrixe is \n");
 for(i=0;i<n1;i++)
  {
   for(j=0;j<m1;j++)
     {
        printf("%4d",a[i][j]);
      }
     printf("\n");
   }
printf("Second Matirxes\n");
for(i=0;i<n2;i++)
  {
   for(j=0;j<m2;j++)
    {
        printf("%4d",b[i][j]);
     }
      printf("\n");
   }
//if(m1==n2||n1==n2)
//printf("multiplication of Two matixes\n");
//if(m1==n2 && n1==n2)
 for(i=0;i<n1;i++)
  {
   for(j=0;j<m1;j++)
    {
     int  k,sum=0;
      for(k=0;k<m1;k++)
        {
          sum= sum+a[i][k]*b[k][j];
       	}
        c[i][j]=sum; 
    }
    printf("\n");
   }
 else
printf("Multipliying is not posibble\n");
printf("multiplication of Two matixes\n");
for(j=0;j<n1;j++)
  {
    for(j=0;j<m1;j++)
      {
        printf("%4d",c[i][j]);
      }
     printf("\n"); 
  }
return 0;
}
