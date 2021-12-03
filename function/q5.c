#include<stdio.h>
void leap(int);
int main()
{
int year;
printf("Enter year want know leap year or not\n");
scanf("%d",&year);
leap(year);
return 0;
}
void leap(int l){
 if(l%4==0)
 printf("Enter year is leap year\n");
 else
printf("Enter year is not leap year\n");
 }
