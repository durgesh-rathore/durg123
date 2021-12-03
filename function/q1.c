//Area and Circumferece of a Circle
#include<stdio.h>
void arecircu(float);
int main()
 {
  float radius;
  printf("Enter the Radius of Circle\n");
  scanf("%f",&radius);
  arecircu(radius);
 return 0;
}
 void arecircu(float r){
   printf("Are of circle  is %f\n",2*3.14*r*r);
   printf("Circumference of circle is %f\n",3.14*r); 
}
