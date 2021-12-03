// Input month number and print how many day in month
#include<stdio.h>
int inputmonth(int);
int main()
{
 int n;
 printf("Enter the month number want to know how many day in month\n");
scanf("%d",&n);
if(n<=12)
 printf(" %d day in month\n",inputmonth(n));
else
printf("Enter value wrong \n");
return 0;}
int inputmonth(int n){
 if(n==4||n==6||n==9||n==11)
 return 30;
 if(n==2)
  return 28;
 return 31;
}
