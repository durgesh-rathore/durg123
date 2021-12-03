//number and power input  by user
#include<stdio.h>
int main()
{
int n,p,i,sum=1;
printf("Enter the number and power\n");
scanf("%d%d",&n,&p);
i=1;
while(i<=p)
{
sum=sum*n;
i++;
}
printf("%d",sum);
return 0;
}
