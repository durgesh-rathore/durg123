// Maxiumb between tow number
#include<stdio.h>
void max(int, int,int);
int main()
{
 int a,b,c;
 printf("Enter three  number want to find maximum in \n");
 scanf("%d%d%d",&a,&b,&c);
  max(a,b,c);
return 0;
}
 void max(int a,int b,int c){
  if(a>b&&a>c)
   
printf("%d number is greatest \n",a);
else if(b>c)
printf("%d number is greatest \n",b);
 else
 printf("%d number is greatest \n",c);
}
