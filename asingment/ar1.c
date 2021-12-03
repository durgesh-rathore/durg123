#include<stdio.h>
int main()
{
int arr[10],i,j,k;
printf("Enter  element in array \n");
for(i=0;i<4;i++)
{
  if(a[i]<0&&i%2!=1)
    {
     for(j=i+1;j<4;j++)
      {
         if(a[j]>=0)
        {   
          for(k=j;k>i;k--)
           {
            temp=a[k];
            a[k]=a[k-1];
            a[k-1]=temp;
           }
         }
       }
     }
else 
    {

     for(j=i+1;j<7;j++)
      {
        if(a[j]>0)
          break;
      }   
    }
}
printf("ARRAY is \n");
for(i=0;i<4;i++)
 printf("%d\t",a[i]);
return 0;
}
