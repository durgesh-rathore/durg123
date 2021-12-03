// Maxiumb between tow number
#include<stdio.h>
void max(int, int);
int main()
{
 int a,b;
 printf("Enter two  number want to find maximum in \n");
 scanf("%d%d",&a,&b);
  max(a,b);
return 0;
}
 void max(int a,int b){
  if(a>b)
   
printf("%d number is greatest \n",a);
else
printf("%d number is greatest \n",b);
}
