// input weeks day number and print week day
#include<stdio.h>
void weekn(int );
int main()
{
 int n;
 printf("Enter the week number\n");
 scanf("%d",&n);
 weekn(n);
return 0;
}
void  weekn(int n){
 switch(n%7)
 {
   case 0:
   printf("Monday");
   break;
   case 1:
   printf("tuseday");
   break;
   case 2:
   printf("Wednesday");
   break;
   case 3:
   printf("Thrusday");
   break;
   case 4:
   printf("Friday");
   break;
   case 5:
   printf("Saturday");
   break;
   case 6:
   printf("sonday");
   break;
}}
