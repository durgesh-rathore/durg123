// Frequency
#include<stdio.h>
void fr(int [],int);
int main(){
 int a[50],n,i;
 printf("Enter the how many element in array\n");
 scanf("%d",&n);
 printf("Enter the element of array\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   fr(a,n);
return 0;
}
void  fr(int a[],int n){
 int i,j,b[10],temp=0,c=0,l=0,p=0,d[10];
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
         if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=a[i];
           }
        }
    }
    //2 2 3 3 4 6 6
for(i=l;i<n;i++){
    c=1;
  for(j=i+1;j<n;j++){  
     if(a[i]==a[j])
       {
          c++;
          l++;
       }
     }
     b[p++]=c;
     d[p++]=a[i];
}
   for(i=0;i<p;i++)
     printf(" number %d is frequency in a  array=%d\n",b[i],d[i]);
}
