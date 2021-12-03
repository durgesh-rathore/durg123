#include<stdio.h>
void check(int);
int main()
{ 
 int n;
  printf("Enter the number ");
  scanf("%d",&n);
  check(n);
return 0;}
 void check(int n){
  if(n>0)
   printf("Enter number is positive\n");
  else
   if(n<0)
      printf("Enter number is Nagative\n");
     else
      printf("Enter number is Zero\n");
}
