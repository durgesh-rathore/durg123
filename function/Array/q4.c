#include<stdio.h>
void array(char []);
int main()
{
int i;
char ch[50]={'I',' ','a','m',' ','I','D','I','O','t'};
array(ch);

return 0;}
void array(char ch[]){
 int i;
 for(i=0;i<10;i++)
  {
   printf("%c",ch[i]);
}
printf("\n");
}
