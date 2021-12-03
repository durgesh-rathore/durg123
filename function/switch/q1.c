// Temperature Conversion Celsius to Fahrenheit and Vice Versa 
// (32°F − 32) × 5/9 = 0°C
#include<stdio.h>
float convert(float );
int main(){
 float t;
 printf("Enter the Temperature \n");
 scanf("%f",&t);
 printf("The Result is %f\n",convert(t));
  return 0;
}
float convert(float n){
  char ch;
printf("Enter your choice convert temperature celsius to Fahrenheit Press key ( c) \nand for vice vers(f)\n"); 
getchar();
  scanf("%c",&ch);
 switch(ch){
    case 'c':
       return 9/2*n+32;
    case 'f':
     
       return 5*(n-32)/9;    
    default :
       printf("Enter Invalid choice\n so ");    
    return 0;
  }
}
