// 1-2+3-4+5-6
#include<stdio.h>
int main()
{
int n,t;
printf("Enter the number");
scanf("%d",&n);
if(n%2==0)
{
printf("%d\n",-n/2);
}
else
{
t=(-(n-1)/2)+n;
printf("%d\n",t);
}
return 0;
}
