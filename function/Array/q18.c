// all unique element of array
#include<stdio.h>
void unique(int [],int);
int main(){
  int a[20],i,n;
  printf("Enter how many element in array\n");
  scanf("%d",&n);
  printf("Enter the %d element of the array\n",n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   unique(a,n);
 return 0;
}

 void unique(int a[],int n){
  int i,j,c[15],f=0,m=0;
   for(i=0;i<n;i++){
       f=0;
      for(j=0;j<n;j++){ 
        if((a[i]==a[j])&&i!=j) {
          f=1;
          break;
        }
     }
   if(f==0)
   c[m++]=a[i];
  }
  if(n==1)
    printf("In array one element that is unique consider\n");
   else
  if(m==0)
    printf("Not a Unique element in array\n");
  else {
  printf("UNIQUE number of array\n");
  for(i=0;i<m;i++){
  printf("%d ",c[i]);}}
printf("\n");
}
