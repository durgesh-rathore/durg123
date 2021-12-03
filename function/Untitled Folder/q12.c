/*count notes
 5555 2000*2
*/
#include<stdio.h>
int count(int);
int main()
{
 int n;
 printf("Enter the amount\n");
  scanf("%d",&n);
  printf("the total note in amount is %d \n",count(n));
return 0;}
int count(int n){
 int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,sum=0;
 //while(n>4){
 if(n>=2000)
   {  
    n1=n/2000;
    n=n-2000*n1;
      }
   if(n>=500){
        n2=n/500;
        n=n-500*n2;
         }
       if(n>200){
              n3=n/200;
              n=n-200*n3;
	       }
           if(n>100){
                   n4=n/200;
                   n=n-100*n4;
   	         }
                   if(n>50){
                         n5=n/50;
                         n=n-50*n5;
                         }
 		 if(n>20){ 
 			      n6=n/20;
			      n=n-20*n6;
  			      }
			      if(n>10){
			            n7=n/10;
			            n=n-10*n7;}
				     if(n>=5){
				         n8=n/5;
				         n=n-5*n8;}
 //}
   sum=n1+n2+n3+n4+n5+n6+n7+n8;
 //printf(" note in amount is %d",sum);
  return sum;
	}

