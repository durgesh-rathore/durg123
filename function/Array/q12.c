#include<stdio.h>
void evenodd(int [],int);
int main(){
 int a[50],n,i;
 printf("Enter the how many element in array\n");
 scanf("%d",&n);
 printf("Enter the element of array\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   evenodd(a,n);
return 0;
}
void  evenodd(int a[],int n){
 int i,e=0,o=0;
   for(i=0;i<n;i++){
     if(a[i]%2==0)
         e++;
        else
          o++;   
}
printf("Odd number in array =%d\nEvan number is array=%d\n",o,e);
}
