#include<stdio.h>

void ram();
int armstrong(int);
int prime(int);
int reverse(int);
int palidrow(int);
int factorial(int);
int seriessum(int);
int main()
  {
      int A;
     ram();
     printf("Enter Number want to cheack armstron or not\n");
     scanf("%d",&A);
       if(armstrong(A))
           printf("Enter number %d is armstrong number\n",A);
         else
           printf("Enter number %d is not armstrong number\n",A);
        if(prime(A))
	   printf("Enter number %d is even \n",A);
	  else
	    printf("Enter number %d is odd\n",A);         
//      printf("End of main function\n");
 	printf("%d is the reverse of %d number\n",reverse(A),A);
         if(palidrow(A))
            printf("Enter number %d is palindrow\n",A);
           else
	     printf("Enter number %d is not palindrow\n",A);
         printf("Factorial of given number is %d",factorial(A));
         printf("Sum of seriesl %d is %d\n",A,seriessum(A));
   return 0;
  }


    void ram()
    {
     int x,y; 
     printf("Enter in the function\n");
     printf("Enter the two number \n");
     scanf("%d%d",&x,&y);
     printf("%d is the sum of %d and %d is \n",x+y,x,y);
    
     }
  int armstrong(int n)
   {
     int sum=0,r,t=n;
      while(n)
	{
	  r=n%10;
 	  sum=sum+r*r*r;
	  n=n/10;
	}
	if(t==sum)
	   return 1;
	 	
           return 0;
     }
 int prime(int n)
   {
     int i;
     for(i=2;i<=n/2;i++)
         if(n%2==0)
           return 1;
	   return 0;
   }
 int reverse(int n)
    {
       int sum=0,r;
      while(n)
	{
	  r=n%10;
 	  sum=sum*10+r;
	  n=n/10;
	}
       return sum;
     }
  int palidrow(int n)
     {
        int sum=0,r,t=n;
      while(n)
	{
	  r=n%10;
 	  sum=sum*10+r;
	  n=n/10;
	}
	if(sum==t)
          return 1;
     return 0;
    }   
   int factorial(int n)
       {
         int fac=1,i;
         for(i=1;i<=n;i++)
	   {
	      fac=fac*i;
            }
          return fac;
        }
   int seriessum(int n)
	{

            return ((n+1)*n/2);
           
         }
