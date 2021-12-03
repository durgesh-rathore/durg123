#include<stdio.h>
void eligivility(int );
int main()
{
int age;
printf("Enter the age \n");
scanf("%d",&age);
eligivility(age);
return 0;
}
void eligivility(int age){
 if(age>17)
  printf("Your eligivle for vote\n");
  else
 printf("Your not eligivle for vote\n");
}
