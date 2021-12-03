// rigth triangle star
/*
#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=9;i++)
 { 
  for(j=1;j<=i;j++)
   {
//if(i<=j&&j<=7+i)
printf("*");
/*else
    printf(" ");
    }
printf("\n");
  }
return 0;
}*/
/*
        *
       **
      ***
     ****
    *****
   ******
  *******
 ********
*/
/*#include<stdio.h>
int main()
{
 int i,j;
for(i=9;i>=1;i--)
 { 
  for(j=1;j<=9;j++)
   {
if(j<i)
printf(" ");
else
    printf("*");
    }
printf("\n");
  }
return 0;
}*/
/*
******** 
*******  
******   
*****    
****     
***      
**       
*
*/  
#include<stdio.h>
int main()
{
 int i,j;
for(i=9;i>=1;i--)
 { 
  for(j=1;j<=i;j++)
 {
    printf("*");
    }
printf("\n");
  }
return 0;
}
/
/*
      +      
      +      
      +      
      +      
      +      
      +      
+++++++++++++
      +      
      +      
      +      
      +      
      +      
      +  
*/
/*#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=13;i++)
 { 
  for(j=1;j<=13;j++)
   {
if(i==7||j==7)
printf("+");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
}*/
/*
+           +
 +         + 
  +       +  
   +     +   
    +   +    
     + +     
      +      
     + +     
    +   +    
   +     +   
  +       +  
 +         + 
+           +
*/
/*#include<stdio.h>
int main()
{
 int i,j;
for(i=1;i<=13;i++)
 { 
  for(j=1;j<=13;j++)
   {
if(i==j||j==14-i)
printf("+");
else
    printf(" ");
    }
printf("\n");
  }
return 0;
}*/
//
/*#include<stdio.h>
int main()
{
 int i,j;
for(i=13;i>=1;i--)
 { 
  for(j=1;j<=13;j++)
   {
  if(j<=i/13)
    printf(" ");
     else
   printf("*");
 }
printf("\n");
  }
return 0;
}*/
