// 1 to 10
/*#include<stdio.h>
int main()
{
int i=1;
do{
  printf("%d\n",i);
  i++;
 }while(i<=10);// while(++i<=10);

return 0;}*/ 
// 10 to 1
/*#include<stdio.h>
int main()
{
int i=10;
do{
  printf("%d\n",i);
  i--;
 }while(i>=1);// while(--i>=1);

return 0;}*/
// 3 program start and point give
/*#include<stdio.h>
int main()
{
int s,e;


printf("Enter the  number start and end\n");
scanf("%d%d",&s,&e); 
if(s<=e){
   do {
    printf("%d\n",s);
     s++;
    }
    while(s<=e);}
else
   { 
   do{
     printf("%d\n",s);
     s--; 
     }while(s>=e);
    }
return 0;
 }*/
// P4. 1 3 5 7 9
/*#include<stdio.h>
int main()
 {
  int i=1;
 do {
  printf("%d\n",i);
  i=i+2;
  }while(i<=10);
  return 0;
 }
#include<stdio.h>
int main()
{
int i=1,n,t=1;
printf("Enter the term\n");
scanf("%d",&n);
do{
  printf("%d\n",t);
  t=t+2;
  i++;
 }while(i<=n);
  return 0;
}*/
// 5.1 to n sum of number
/*#include<stdio.h>
int main()
{
int i=1,n,t=0;
printf("Enter the term\n");
scanf("%d",&n);
do{
	t=t+i;
   i++;
 }while(i<=n);
  printf("Sum of series=%d\n",t);
  return 0;*/
//P.6 table of 2
/*#include<stdio.h>
int main()
{
int i=1,n;
printf("Enter the term\n");
scanf("%d",&n);
do{
  printf("%d\n",i*2);
  i++;
 }while(i<=n);
  return 0;

}*/


//Q.7  1-2+3-4+5-6
/*#include<stdio.h>
int main()
{
int i=1,n,t=0;
printf("Enter the term\n");
scanf("%d",&n);
do{
   if(i%2==0)
      t=t-i;
	else
     t=t+i;
  i++;
 }
while(i<=n);
printf("%d",t);
  return 0;

}*/


//Q.8 factorial
/*#include<stdio.h>
int main()
{
 int i=1,f=1,n;
  printf("Enter the number\n");
   scanf("%d",&n);
  if(n==0||n==1) 
    f=1;//printf("factorial of 0 and 1 is 1\n");
else {
   do{
        f=f*i;
       i++;
   }
 while(i<=n);
}
 printf("factorial of given number is %d\n",f);

return 0;
}
*/// Q.9 reverse number
/*#include<stdio.h>
int main()
{
int sum=0,n,i,r;
printf("Enter the number\n");
scanf("%d",&n);
do{
   r=n%10;
  sum=sum*10+r;
   n=n/10;
   }
    while(n);
  printf("Revers of given number is %d\n",sum);
return 0;}*/
// Q.10 palindrom
/*#include<stdio.h>
int main()
{
int sum=0,n,i,r,t;
printf("Enter the number\n");
scanf("%d",&n);
t=n;
do{
   r=n%10;
  sum=sum*10+r;
   n=n/10;
   }
    while(n);
  //printf("Revers of given number is %d\n",sum);
   if(t==sum)
    printf("Enter number %d is palindrom\n",t);
     else
     printf("Enter number %d is not palindrom\n",t);
return 0;}*/
// Q11. Armstrong or not
#include<stdio.h>
int main()
{
int sum=0,n,i,r,t;
printf("Enter the number\n");
scanf("%d",&n);
t=n;
do{
   r=n%10;
  sum=sum+r*r*r;
   n=n/10;
   }
    while(n);
  //printf("Revers of given number is %d\n",sum);
   if(t==sum)
    printf("Enter number %d is Armstrong\n",t);
     else
     printf("Enter number %d is not Armstrong\n",t);
return 0;}






