//538 in reverse 835
#include<stdio.h>
int main()
{ 
int n,m,sum=0;
printf("Enter the number want reverse\n");
scanf("%d",&n);
while(n)
{
m=n%10;
sum=sum*10+m;
n=n/10;
}
printf("reverse number is =%d\n",sum);
return 0;
}
