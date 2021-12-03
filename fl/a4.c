/*
1
12
123
1234
12345*/
/*
12345
1234
123
12
1
*/
/*
 1
 1 2
 1   3  
 1     4
 1 2 3 4 5
*/
/*
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{ 
for(j=1;j<=i;j++)
{
if(i==5||j==1||i==j)
printf("%d ",j);
else
printf("  ");
}
printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,j,s;
for(i=1;i<=5;i++)
{
 for(s=8;s>i;s--)
   printf(" ");  
for(j=1;j<=2*i-1;j++)
{
printf(" %d ",j);
//printf("  ");
}
printf("\n");
}
for(i=1;i<=5;i++)
{
 for(s=8;s>i;s--)
   printf(" ");  
for(j=1;j<=2*i-1;j++)
{
if(j
printf("%d ",j);

//printf("  ");
}
printf("\n");
}
return 0;
}*/
#include<stdio.h>
int main()
{
int i,j,s;
 for(i=1;i<=5;i++)
{
 for(s=5;s>i;s--)
   printf(" ");  
for(j=1;j<=;j++)
{
if(i==5||j==1||i==j)
printf("%d ",j);
//printf("  ");
}
printf("\n");
}
return 0;
}
