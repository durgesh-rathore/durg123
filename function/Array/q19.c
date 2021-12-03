// count duplicate  element in array
#include<stdio.h>
void duplicate(int [],int);
int main(){
  int a[20],i,n;
  printf("Enter how many element in array\n");
  scanf("%d",&n);
  printf("Enter the %d element of the array\n",n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   duplicate(a,n);
 return 0;
}

 void duplicate(int a[],int n){
  int i,j,f=0,m=0;
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){ 
        if(a[i]>a[j]) {//12121=4
          m=a[i];
          a[i]=a[j];
          a[j]=m;
          }
     }
  }
for(i=0;i<n;i++){ 
   if((a[i]==a[i+1])&&a[i]!=a[i+2])
     f++;
  }
   if(f==0)
   printf("Not a duplicat element in array\n");
   else
    printf("Duplicate element in array =%d\n",f);
  }
