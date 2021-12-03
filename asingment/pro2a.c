#include<stdio.h>
#include<stdlib.h>
int ascii(char);
float trigle(float ,float);
float circle(float);
float circlec(float);
float simple(float,float,int);
float gross(int);
int main()
 {
   int ch,s;
    float a,b,p,t,r;
  do{
     printf("Enter your choice between 1 to 50\n");
      scanf("%d",&ch);
     switch(ch){
        
         case 1:
            printf("%d is number of value ofascii \n",ascii('@')); 
            break;
         case 2:
          
	    printf("Enter the value of hight and base\n");
	    scanf("%f%f",&a,&b);
            printf(" hight %f and base %f of trigel area=%f\n",a,b,trigle(a,b));
            break;
         case 3:
	    printf("Enter the radius of circle\n");
	      scanf("%f",&r);
           printf(" area of circle is %f\n",circle(r));
	    break;
	 case 4:
	      printf("Enter the radius of circle\n");
               scanf("%f",&r);
             printf(" circumphrence of circle is %f\n",circlec(6.1f)); 
             break;
	  case 5:
            
             printf("Enter the Principle  and rate  and time\n");
	     scanf(" %f%f%f",&p,&t,&r);
             printf(" Simpleinterest of %f\n",simple(p,t,r));
             break;
           case 6:
	     // for gross salary
	     
             printf("Enter Salary\n");
	     scanf("%d",&s);
             printf("gross salary is %f\n",gross(s));
             break;
	   case 0:
	        exit(0); 
         }
  }while(1);
   return 0;
}

   float trigle(float a,float b)
    {
      return (a*b*1/2);
    }
  int ascii(char c)
    {   
      return c;
    }
  float circle(float r)
    {
      return (3.14f*r*r);
    }
  float circlec(float r)
    {
     return (3.14f*r*2);
    }
  float simple(float p,float r, int t)
    {
     return (p*r*t/100.0f);
   }
  float gross(int s)
   { 
     if(s>=10000)
        return (s+s*16.0f/100);
      if(s>=6000)
      return (s+s*5.0f/100);
        else
       return s;
    }
