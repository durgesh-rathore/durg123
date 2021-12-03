#include<stdio.h>
void div5a11(int);
int main()
 {
   int n;
   printf("Enter the number want check it divisible by 5 and 11\n");
   scanf("%d",&n);
  div5a11(n);
 return 0;}
void div5a11(int n){
 if(n%5==0&&n%11==0)
   printf("Enter number is divisible by 5 and 11\n");
   else
   printf("Enter number is  not divisible by 5 and 11\n");
}
