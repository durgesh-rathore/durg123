// Find Maximum number of array
#include<stdio.h>
int Max(int [],int);
int min(int [],int );
int main(){
   int a[50],i,n;
   printf("How many element in array");
   scanf("%d",&n);
   printf("Enter the element of array\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
     }
  printf("Maximum number of array element =%d\n",Max(a,n));
  printf("Minimum number of array element =%d\n",min(a,n));
return 0;
}				   // max=a[0]
int Max(int a[],int n){            // for(i=1;i<n;i++)
    int i=n-1,maxm=a[i],temp=0;    // if(max<a[i])
    if(i==0) {			   //  temp=max;
     return maxm;}	  // max=a[i];
				  // a[i]=max;
 if(maxm>Max(a,i)){
     temp=maxm;
     maxm=a[i];
     a[i]=temp;

   }
}
int min(int a[],int n){            // for(i=1;i<n;i++)
    int i=n-1,minm=a[i],temp=0;    // if(max<a[i])
    if(i==0) {			   //  temp=max;
    return minm;
    }		  // max=a[i];
				  // a[i]=max;
 if(minm<min(a,i)){
    temp=minm;
    minm=a[i];
    a[i]=temp;

   }
}
