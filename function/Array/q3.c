#include<stdio.h>
void specificlo(int [],int ,int );
int main(){
int a[100]={5,6,2,8,3,9,5},n,l,m=7;
printf("Enter the location want to delete element\n");
scanf("%d",&l);
specificlo(a,l,m);
m++;
return 0;
}
void specificlo(int a[],int l,int m){
int i;
for(i=0;i<m;i++)
{
 if(i>l-1)
  a[i-1]=a[i];
}
m--;
for(i=0;i<m;i++)
printf("%d ",a[i]);
}
