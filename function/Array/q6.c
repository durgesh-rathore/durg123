// convert string in simulatanious
#include<stdio.h>
#include<string.h>
 void palindrom(char [],int);
int main()
{
 char str[50];
  int l=0;
 printf("Enter the string want to know is palindrowm\n"); 
  scanf("%s",str);
  l=strlen(str);
 palindrom(str,l);
return 0;
}
void palindrom(char str[],int l){
  int i,k=0,flag=0;
   char s[50];
   for(i=l-1;i>=0;i--){
     s[k++]=str[i];}

   for(i=0;i<l;i++){
     if(s[i]!=str[i])
        {
                flag=1;
         break;}
}
        if(flag)
       printf("String is not Palindrown\n"); 
       else
       printf("String is Palindrown\n");
}   
