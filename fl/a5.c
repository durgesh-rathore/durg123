/*Q.1
#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=7;i++)
{
for(j=1;j<=7;j++)
{
printf("+ ");
 }
printf("\n");
}
return 0;
}*/
//Q.2
/*#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=9;i++)
{
for(j=1;j<=9;j++)
{
if(i==1||i==9||j==1||j==9||i==j||j==10-i)
printf(" + ");
else
printf("  ");
 }
printf("\n");
}
return 0;
}*/
/*12345678901
   ********
  ********
 ********
*********/ 
#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=9;i++)
{
for(j=1;j<=16;j++)
{
if((i==1||i==9)&&j==i||j==8+i)

printf("*");
else
printf(" ");
 }
printf("\n");
}
return 0;
}
