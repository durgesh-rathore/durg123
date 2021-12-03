#include<stdio.h>
void rimove(int [],int);
int main(){
int arr[100],n,i;
printf("Enter how many element in array\n");
scanf("%d",&n);
printf("Enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
rimove(arr,n);
return 0;
}
void rimove(int arr[],int n){

int i,j,k;
for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
         for(k=j;k<n;k++){
          arr[k]=arr[k+1];
          }
       n--;
        j;
     }
}
  
     }
for(i=0;i<n;i++){
printf("%d",arr[i]);}
}
