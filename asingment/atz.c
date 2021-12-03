#include<stdio.h>
int main()
{
int i,j;
char ch;
printf("Enter you want to convert pattern in A to Z\n Exit to press key Y\n");
scanf("%c",&ch);
switch(ch)
{
 /*
case 'A':
 {
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
}
  break;}
case 'B':
 {
  
for(i=1;i<=7;i++)
 	{
                 
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
break;
}case 'C':
 {
  for(i=1;i<=5;i++)
 	{
     
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
  break;
  }
 case 'D':
 {
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
  break;
}
case 'E':
 {
  for(i=1;i<=5;i++)
 	{
          for(j=1;j<=3;j++)
	{
       if(i==1||i==5||j==1||i==3)
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
break;}case 'F':
 {
for(i=1;i<=5;i++)
 	{
          for(j=1;j<=3;j++)
	{
       if(i==1||j==1||i==3)
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
  break;
}*/
case 'G':
 {
for(i=1;i<=5;i++)
 	{
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
  break;
}/*
case 'H':
 {
for(i=1;i<=5;i++)

                  for(j=1;j<=5;j++)
	{
       if(j==1||i==3||j==5)
               printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
  break;
}case 'I':
 {
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
  break;}
case 'J':
 {
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
  break;}
case 'K':
 {for(i=1;i<=5;i++)
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
  break;}
case 'L':
 {
for(i=1;i<=5;i++)
{
for(j=1;j<=3;j++)
{
 if(j==1||i==5)
 printf("*");
else
printf(" ");
}
printf("\n");
}
  break;
}
case 'M':
 {
for(i=1;i<=5;i++)
{
for(j=1;j<=10;j++)
{
 if(j==1||i==j||j==10||j==10-i)
 printf("*");
else
printf(" ");
}
printf("\n");
}
  break;
}
case 'N':
 {
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
 if(j==1||j==5||i==j)
 printf("*");
else
printf(" ");
}
printf("\n");
}
  break;
}*/
case 'O':
{
for(i=1;i<=4;i++)
 	{
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
break;
}

 case 'P':
{
for(i=1;i<=8;i++)
 	{
         
          for(j=1;j<=5;j++)
	{
       if(i==1||i==5||j==1||j==5&&i<=5)
         if((i==1&&j==5)||(i==5&&j==5))
       printf(" ");
         else
           printf("* ");
       else
           printf("  ");
  }
printf("\n");
}
break;
}
/*case 'Q':
{
for(i=1;i<=5;i++)
 	{
          for(j=1;j<=4;j++)
	{
       if(i==1||i==4||j==1||j==4)
         if((i==1)||&&(j==4||j==1)||(i==4) &&(j==4||j==1)||i==5|| j==1)
       printf(" ");
         else
           printf("* ");
       else
           printf(" ");
  }
printf("\n");
}
break;
}*/
/*case 'R':
//{
//break;
//}*/
case 'S':
{
  
for(i=1;i<=7;i++)
 	{
                 
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
break;
}
/*
case 'T':
{
break;
}case 'U':
{
break;
}case 'V':
{
break;
}
case 'W':
{
break;
}
case 'X':
{
break;
}case 'Y':
{
break;
}case 'Z':
{
break;
}}*/
}
return 0;
}
