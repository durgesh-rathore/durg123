// Date is correct or not
#include<stdio.h>
 void dcorect(int,int,int);
 int main()
   {
    int date,day,year;
     printf("Enter month \n");
     scanf("%d",&date);

     printf("Enter day \n");
     scanf("%d",&day);
     printf("Enter year \n");
     scanf("%d",&year);
    dcorect(date,day,year);
  return  0;
 }
    void dcorect(int date,int day,int year){
       if(date==1||date==3||date==5||date==7||date==8||date==10||date==12)  {
          if(day<=31)
           printf("Enter date is correct\n");}
            else
             if(date==4||date==6||date==9||date==11)
              {
               if(day<=30)
                printf("Enter date is correct\n");
		}
               else
                  if(date==2){ 
		     if(day==29){             
                        if(year%4==0)
                        printf("Enter date is correct\n");
   			} 
                        if(day<=28)
                          printf("Enter date is correct ");
                       else
                          printf("Enter date is not correct\n");
                    }
 	}
