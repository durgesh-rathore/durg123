// copy all element an array to other array
#include<stdio.h>
void copy(int [],int [],int);
int main(){
 int i,n,a[50],b[50];
  printf("How many element in array");
  scanf("%d",&n);
  printf("Enter the %d element in array\n",n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  copy(a,b,n);
  printf("Element of b array \n");
  for(i=0;i<n;i++)
    printf("%d ",b[i]);
 return 0;
}
 void copy(int a[],int b[],int n){
   int i;
   for(i=0;i<n;i++)
      b[i]=a[i];
 }
