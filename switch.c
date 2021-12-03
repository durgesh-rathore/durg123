// switc case calculator
#include<stdio.h>
int main()
{
int n,a,b,c;
printf("select choice \n1.Addition \n2.Subtract \n3.Multiplying \n4.Divide \n5.Modulus\n");
scanf("%d",&n);
printf("Enter two number\n");
scanf("%d%d",&a,&b);
switch(n){
case 1:
   c=a+b;
printf("Addition of a and b is %d",c);
break; 
case 2:
   c=a-b;
printf("Subtract of a and b is %d",c);
 break;
case 3:
   c=a*b;
printf("Multiplying of a and b is %d",c);
break;
case 4:
   c=a/b;
printf("Divide of a and b is %d",c);
break;
case 5:
   c=a%b;
printf("Modulus of a and b is %d",c);
break;
default :
printf("Invalid choice\n");   

}
return 0;}
