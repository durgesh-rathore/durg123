/*  
     J  1 2 3 4 5 6 7 8 9 10 i
	* * * * * * * * * *  1
	* * * *     * * * *  2
	* * *         * * *  3 
	* *             * *  4 
	*                 *  5
/*#include<stdio.h>
int main()
{
int i,j;
//printf("Enter the limit\n");
//scanf("%d",&n);
for(i=5;i>=1;i--)
{	
  for(j=1;j<=10;j++)
  {
     if(j>i&&j<=(10-i))
     printf(" ");
	else
	printf("*");      
	}
     printf("\n");
  } 

return 0;
}*/
/*
*       * * * * **       * * * * *    
*	*
*   *	*   *
*	* 
* * * * * * * * * 
	*       *
    *  	*   *	*	
	*	*
* * * *	*	*    

		*        * * * * * *
		*        * 
		*	 *
		*   	 *   
		*	 * 
		* * * *  * * * * * * *
			   *           *
		      	   *   	  *	
		    	   *	  *
			   *	  *
		 * * * * * *	   *	  *
		* * * * *
*/

#include<stdio.h>
int main()
{
 int i,j,n=11;
 for(i=1;i<=n;i++)
   {
     for(j=1;j<=n;j++)
  	{

 	  if((i==(n/2+1)||j==(n/2+1))||(i==1&&(j>(n/2+1)&&j<=n))||((i>(n/2+1)&&i<=n)&&j==n)||(i==n&&j>=1&&j<=(n/2+1))||(i>=1&&i<(n/2+1)&&j==1))/*||(i==3&&j==3)||(i==3&&j==7)||(i==7&&j==3)||(i==7&&j==7)*/
	    printf("*");
	    else
		printf(" ");
	  }
	
	printf("\n");
     }
return 0;
}
/*#include<stdio.h>
int main()
{
 int i,j,t;
 printf("Enter the number\n");
for 11

*       * * * * * *
*       * 
*	*
*   	*   
*	* 
* * * * * * * * * *
	*         *
      	*   	  *	
	*	  *
        *	  *
	*	  *
* * * * *

scanf("%d",&t);
for(i=1;i<=t;i++)
 {
   for(j=t;j>=t+1-i;j--)
    { 
	printf(" %d ",j);
     }
      printf("\n");
   }
return 0;
}*/
