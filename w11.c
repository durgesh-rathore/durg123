//Armstrong  number or not 153=1^3+5^3+3^3
#include<stdio.h>
int main()
{
int n,m,sum=0,t,P;
printf("Enter the number");
scanf("%d",&n);
P=n;
while(n)
{
m=n%10;
sum=sum+m*m*m;
n=n/10;
}
if(P==sum)
printf("Enter number %d is  palindorme\n",P);
else
printf("enter Number %d is not Palindorme\n",P); 

return 0;
}
