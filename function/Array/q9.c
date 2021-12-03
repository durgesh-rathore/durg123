//sum of array element using recursion
#include<stdio.h>
int sumarr(int [],int);
int main()
{
 int a[50],i,n;
  printf("How many element in array");
   scanf("%d",&n);
  printf("Enter the element of array\n");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
printf("Sum of array element =%d",sumarr(a,n));
return 0;
}
int sumarr(int a[],int n){
  int i=n-1,sum=0;
  if(i<0)
return sum;
 sum =a[i]+sumarr(a,i);
}
/*#include<stdio.h>
int sumarr(int [],int);
int main()
{
 int a[50],i,n;
  printf("How many element in array");
   scanf("%d",&n);
  printf("Enter the element of array\n");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
printf("Sum of array element =%d",sumarr(a,n));
return 0;
}
int sumarr(int a[],int n){
  int i,sum=0;
  for(i=0;i<n;i++){
  sum=sum+a[i];
}
return sum;
}*/
