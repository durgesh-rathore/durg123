#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[50],i,n,el,p,ch;
printf("How many element want to enter in array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
do{
  printf("Enter your choice between \n1.Inserting a position \n2.Deleting element a position \n3.Traversing \n4.sorting\n5.searching\n6 Exit\n");
scanf("%d",&ch);
switch(ch)
 {
  case 1:
    {
   printf("Enter the element and position \n");
   scanf("%d%d",&el,&p);
  for(i=n-1;i>=0;i--) 
    {
     if(i!=(p-1))
      {
       a[i+1]=a[i];
       }
       else
       {
        a[i+1]=a[i];
        a[i]=el;
        n++;
        break;
        }
      }
}
case 2:
  
 {
  printf("Enter the  position \n");
   scanf("%d",&p);
   for(i=0;i<n;i++) 
    {
     if(i>=p-1)
      {
       a[i]=a[i+1];
       }
       /*else
       {
        a[i+1]=a[i];
        a[i]=el;
        n++;
        break;
        }*/
      }
        n--;
     break;
    }
case 4:
for(i=0;i<n;i++)
 {
  if(a[i]<a[i+1])
   {
    a[i+1]=a[i];
  }
}
break;   
case 3:
for(i=0;i<n;i++)
printf("%d\t",a[i]);
break;
case 6:
 exit(0);
}
}
while(1);
 return 0;
}
