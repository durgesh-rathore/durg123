//factorial of given number
#include<stdio.h>
int main()
{
int n,fact=1;
printf("Enter the want to factorial\n");
scanf("%d",&n);
int i=1;
while(n>=i)
{
fact=fact*i;
i++;
}
printf("%d is the factorial of the %d number\n",fact,n);
return 0;
}
