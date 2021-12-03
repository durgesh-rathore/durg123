#include<stdio.h>
void angle(int ,int ,int);
int main()
{
 int a1,a2,a3;
 printf("Enter the  three Angle of tringle ");
 scanf("%d%d%d",&a1,&a2,&a3);
  angle(a1,a2,a3);
return 0;}
 void angle(int a1,int a2,int a3){
 if((a1*a1+a2*a2)==a3*a3)
   printf("Enter Triangle is valid\n");
   else  if((a1*a1+a3*a3)==a2*a2)
printf("Enter Triangle is valid\n");
   else  if((a2*a2+a3*a3)==a1*a1)
    printf("Enter Triangle is valid\n"); 

 else
printf("Enter Triangle is not  valid\n");
}
