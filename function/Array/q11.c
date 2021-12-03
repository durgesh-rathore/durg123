//Get second largest element in an array
#include<stdio.h>
int second(int [],int);
int main(){
 int a[50],n,i;
 printf("Enter the how many element in array\n");
 scanf("%d",&n);
 printf("Enter the element of array\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  printf("Second largest number in array=%d\n",second(a,n));
return 0;
}
int second(int a[],int n){
 int i,sm,temp,j;
 for(j=0;j<2;j++){
    sm=a[j];
   for(i=1+j;i<n;i++){
     if(sm<a[i]){
       temp=sm;
       sm=a[i];
       a[i]=temp;
}
}
}
return sm;
}
