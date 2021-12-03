// delete an element
#include<stdio.h>
void specificlo(int [],int );
int main(){
 int a[100],m,i;
 printf("Enter how many element in array\n");
 scanf("%d",&m);
 printf("Enter the %d element of an array\n",m);
  for(i=0;i<m;i++)
     scanf("%d",&a[i]);
 specificlo(a,m);
 return 0;
}
 void specificlo(int a[],int m){
  int i;
  printf("%d element  is Delete\n",a[m-1]);
  m--;;
  for(i=0;i<m;i++){
   printf("%d ",a[i]);}
 } 
