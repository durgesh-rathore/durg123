//Input angles of a triangle and check whether the triangle is valid or not 
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
 if((a1+a2+a3)==180)
   printf("Enter Triangle is valid\n");
   else
    printf("Enter Triangle is not valid\n"); 
}
