#include<stdio.h>
void eo(int);
int main()
{
int n;
printf("Enter the number want to check is odd or even");
scanf("%d",&n);
eo(n);
return 0;
}
void eo(int n){
 if(n%2==0)
  printf("Enter number is even\n");
  else
 printf("Enter number is odd\n");
}

