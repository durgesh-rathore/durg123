#include<stdio.h>
int main()
{ 
int P,n,m,sum=0;
printf("Enter the number want reverse\n");
scanf("%d",&P);
n=P;
while(n)
{
m=n%10;
sum=sum*10+m;
n=n/10;
}
if(P==sum)
printf("Enter number %d is  palindorme\n",P);
else
printf("enter Number %d is not Palindorme\n",P); 
return 0;
}
