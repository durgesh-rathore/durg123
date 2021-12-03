/*

		*
              * *
            *   *
          *     *
        *       *   
      *         *
    *           *
  *             *
* * * * * * * * * 



*/
// Q.2
/*#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=10;i++)
 { 
  for(j=1;j<=9;j++)
   {
if((i==j||i==10-j)||(i>=2&&i<=9)&&(j==1||j==9)||(i==1||i==9)&&(j>=2&&j<=8))
printf("*");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
 }    */
// Q3 
/* 123456789123456                                                                                            
        *******
       *******
      *******
     *******
    *******
   *******	
  *******
 *******
*******	*/     

/*
#include<stdio.h>
int main()
{
 int i,j;
for(i=9;i>=1;i--)
 { 
  for(j=1;j<=16;j++)
   {
if(i<=j&&j<=7+i)
printf("*");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
}*/

/*
*********       
 *********      
  *********     
   *********    
    *********   
     *********  
      ********* 
       *********
        ********
*/
/*
#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=9;i++)
 { 
  for(j=1;j<=16;j++)
   {
if(i<=j&&j<=8+i)
printf("*");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
}

*/
/*
****************
*              *
*              *
*              *
*              *
*              *
*              *
*              *
****************
*/

/*#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=9;i++)
 { 
  for(j=1;j<=16;j++)
   {
if((i==1||i==9)&&j<=16||(j==16||j==1)&&(i<=9))
printf("*");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
}
*//*

        ********
       *      * 
      *      *  
     *      *   
    *      *    
   *      *     
  *      *      
 *      *       
********   
#include<stdio.h>
int main()
{
 int i,j;
for(i=9;i>=1;i--)
 { 
  for(j=1;j<=16;j++)
   {
if((i==1||i==9)&&(j>=i&&j<=7+i)||(j==i+7||j==i)&&(i<=9)&&(i<=j&&j<=7+i))
printf("*");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
}


*/
/*
********        
 *      *       
  *      *      
   *      *     
    *      *    
     *      *   
      *      *  
       *      * 
        ********

*/
#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=9;i++)
 { 
  for(j=1;j<=16;j++)
   {
// that is writeif((i==1||i==9)&&(i<=j&&j<=7+i)||(j==i+7||j==i)&&(i<=9)&&(i<=j&&j<=7+i))
if((i==1||i==9)&&(i<=j&&j<=7+i)||(j==i||j==i+7))
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
 int i,j;
for(i=1;i<=9;i++)
 { 
  for(j=1;j<=16;j++)
   {
if((i==1||i==9)&&(i<=j&&j<=7+i)||(j==i+7||j==i)&&(i<=9)&&(i<=j&&j<=7+i))
printf("*");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
}*/







