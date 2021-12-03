//1 to n number sum
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the number\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+i;// without n*(n+1)/2;
i++;
}
printf("The sum of 1 to n is =%d\n",sum);
return 0;
}
