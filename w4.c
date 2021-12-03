// 1 3 5 7 9
#include<stdio.h>
int main()
{
int n,i,j=1;
printf("Enter the number want to term=\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("%d\t",j);// printf("%d\t",2*i-1); i++;
j=j+2;
i++;
}
return 0;}
