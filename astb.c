/* Electricity bill
 50 unit rs 0.50
100unit rs 0.75
150 unit rs 1.20
unit 250 rs 1.50
*/
#include<stdio.h>
int main()
{
float unit=0,ub=0,totalbill=0;
printf("Enter the unit");
scanf("%f",&unit);
if(unit>=250)
  {
  ub=unit-250;
  unit=unit-ub;
  totalbill=totalbill+1.50*ub;
 }
if(unit>=150&&unit<250)
{
ub=unit-150;
  unit=unit-ub;
  totalbill=totalbill+1.20*ub;
}
if(unit>=100&&unit<150)
{
ub=unit-100;
  unit=unit-ub;
  totalbill=totalbill+7.50*ub;
}
if(unit>=50&&unit<100)
{
ub=unit-50;
  unit=unit-ub;
  totalbill=totalbill+0.50*ub;
}
totalbill=totalbill+(totalbill*20)/100;
printf("%f  is total bill your \n",totalbill);
return 0;
}
