#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,i;
 int *p;
printf("Enter the number\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
printf("Enter the element\n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}

return 0;}
