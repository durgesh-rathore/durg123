#include<stdio.h>
void nagative(int [],int);
int main(){
 int a[50],n,i;
 printf("Enter the how many element in array\n");
 scanf("%d",&n);
 printf("Enter the element of array\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   nagative(a,n);
return 0;
}
void  nagative(int a[],int n){
 int i,e=0,o=0,m=0;
   for(i=0;i<n;i++){
     if(a[i]<0)
         e++;
        else if(a[i]==0)
              m++;
             else
               o++;   
  }
 printf("Nagative number in array =%d\nPositve number in array=%d\nZero number in array=%d\n",e,o,m);
}
