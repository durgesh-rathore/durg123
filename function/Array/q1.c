#include<stdio.h>
void specificlo(int [],int ,int,int );
int main(){
int a[100]={5,6,2,8,3,9,5},n,l,m=7;
printf("Enter the location want to insert element\n");
scanf("%d",&l);
printf("Enter element\n");
scanf("%d",&n);
specificlo(a,l,n,m);
m++;
return 0;
}
void specificlo(int a[],int l,int n,int m){
int i;
for(i=6;i>=0;i--)
{
 if(i>=l-1)
  a[i+1]=a[i];
}
a[l-1]=n;
m++;
for(i=0;i<m;i++)
printf("%d ",a[i]);
}
