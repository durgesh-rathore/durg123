// A to Z in pattern 
#include<stdio.h>
int main()
{
char choice;
int i,j,space;
 
     printf("please Enter character want to A to Z \n");
	//scanf("%c",&choice);
  //switch(choice)
    //  case 'A':
/*1
    * 
   * * 
  *   * 
 * * * * 
*       * 
      for(i=1;i<=5;i++)
 	{
         for(space=5;space>i;space--)
            printf(" ");
          for(j=1;j<=i;j++)
	{
       if(j==1||i==j||i==4)
       printf("* ");
         else
           printf("  ");
  }
printf("\n");
}*//*
* * * *  
*       * 
*       * 
* * * *  
*       * 
*       * 
* * * *  
   for(i=1;i<=7;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=5;j++)
	{
       if(i==1||i==4||i==7||j==1||j==5)
  if((i==1||i==4||i==7)&&j==5)      
 printf(" ");
         else
           printf("* ");
else
printf("  ");
  }
printf("\n");
}
return 0;
}*/
/*
 * * * * 
*         
*         
*         
 * * * * 

  for(i=1;i<=5;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=5;j++)
	{
       if(i==1||i==5||j==1)
         if((i==1&&j==1)||(i==5&&j==1))
       printf(" ");
         else
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
return 0;
}*//*
* * * *  
  *     * 
  *     * 
  *     * 
* * * *  
for(i=1;i<=5;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=5;j++)
	{
       if(i==1||i==5||j==2||j==5)
         if((i==1&&j==5)||(i==5&&j==5))
       printf(" ");
         else
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
return 0;
}*//*
* * * 
*     
* * * 
*     
* * *
for(i=1;i<=5;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=3;j++)
	{
       if(i==1||i==5||j==1||i==3)
         //if((i==1&&j==5)||(i==5&&j==5))
       //printf(" ");
         //else
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
return 0;
}*//*
* * * 
*     
* * * 
*     
*   
for(i=1;i<=5;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=3;j++)
	{
       if(i==1||j==1||i==3)
         //if((i==1&&j==5)||(i==5&&j==5))
       //printf(" ");
         //else
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
return 0;
}*//*
 *  * * 
*         
*   * * 
*   * * 
 *  * * 
  
*/
/*for(i=1;i<=5;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=5;j++)
	{
       if(i==1||i==3||i==5||j==1||i==4)
         if((i==1&&j==1)||(i==5&&j==1)||(i==3&&j==2||j==3)||(i==4&&j==2||j==3))
       printf(" ");
        else
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
return 0;
}*//*
*       * 
*       * 
* * * * * 
*       * 
*       * 
*/
/*for(i=1;i<=5;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=5;j++)
	{
       if(j==1||i==3||j==5)
         /*if((i==1&&j==1)||(i==5&&j==1)||(i==3&&j==2||j==3)||(i==4&&j==2||j==3))
       printf(" ");
        else*/
  /*         printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
return 0;
}*//*
***
 * 
 * 
 * 
***
for(i=1;i<=5;i++)
{
for(j=1;j<=3;j++)
{
if(i==1||j==2||i==5)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}*//*
****
 *  
 *  
 * *
 ***

for(i=1;i<=5;i++)
{
for(j=1;j<=4;j++)
{
if(i==1||j==2||i==5||i==4)
if(i==4&&(j==1||j==3)||i==5&&j==1)
printf(" ");
else printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}*/
/*

* *
**
*
**
* *


for(i=1;i<=5;i++)
{
for(j=1;j<=3;j++)
{
 if(j==1||j==2&&(i==2||i==4)||j==3&&(i==1||i==5))
 printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}*//*
*  
*  
*  
*  
***
for(i=1;i<=5;i++)
{
for(j=1;j<=3;j++)
{
 if(j==1||i==5)
//if(j==1||j==2&&(i==2||i==4)||j==3&&(i==1||i==5))
 printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}*//*
*   *
**  *
* * *
*  **
*   *

for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
 if(j==1||j==5||i==j)
//if(j==1||j==2&&(i==2||i==4)||j==3&&(i==1||i==5))
 printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}*//*
*        *
**      **
* *    * *
*  *  *  *
*   **   *

*//*
 * *  
*   * 
*   * 
 * *
*/

/*for(i=1;i<=4;i++)
 	{
         //for(space=5;space>i;space--)
           // printf(" ");
          for(j=1;j<=4;j++)
	{
       if(i==1||i==4||j==1||j==4)
         if((i==1&&(j==4||j==1))||(i==4&&(j==4||j==1)))
       printf(" ");
         else
           printf("* ");
       else
           printf(" ");
  }
printf("\n");
}
return 0;
}*/
/*for(i=1;i<=5;i++)
{
for(j=1;j<=10;j++)
{
 if(j==1||i==j||j==10||j==10-i)
//if(j==1||j==2&&(i==2||i==4)||j==3&&(i==1||i==5))
 printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
for(i=1;i<=5;i++)
{
for(j=1;j<=10;j++)
{
 if(j==1||i==j||j==10||j==10-i)
//if(j==1||j==2&&(i==2||i==4)||j==3&&(i==1||i==5))
 printf("*");
else
printf(" ");
}
printf("\n");
}return 0;
}*/
