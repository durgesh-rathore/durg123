// Read and print element of array using recursion
#include<stdio.h>
int nagative(int a[],int);
int main()
{
 int a[20],i,n;
  printf("Enter How many element in array\n");
     scanf("%d",&n);
 printf("Enter the element of array\n");
  for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
nagative(a,n);

return 0;}

int nagative(int a[],int n){
int i,j;
 printf(" nagative element of Array\n");
for(i=0;i<n;i++)
     {
       if(a[i]<0)
         printf(" %d",a[i]);


  }
printf("\n");
}
