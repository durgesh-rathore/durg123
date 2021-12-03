//  2 4 6 8 10
#include<stdio.h>
int main()
{
int n,i;
printf("Enter number \n");
scanf("%d",&n);
i=1;
while(n>=i)
{
printf("%d\t",i*2);
i++;
}
printf("\n");
return 0;
}
