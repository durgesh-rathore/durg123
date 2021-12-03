// Insert an element
#include<stdio.h>
void specificlo(int [] ,int,int );
int main(){
 int a[100],n,l,m,i;
 printf("Enter how many element in array\n");
 scanf("%d",&m);
 printf("Enter the %d element of an array\n",m);
  for(i=0;i<m;i++)
     scanf("%d",&a[i]);
 printf("Enter element\n");
 scanf("%d",&n);
 specificlo(a,n,m);
 return 0;
}
void specificlo(int a[],int n,int m){
int i;
for(i=m;i>=0;i--)
{
  a[i+1]=a[i];
}
a[0]=n;
m++;
for(i=0;i<m;i++){
printf("%d ",a[i]);}
}
