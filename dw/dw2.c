// menu driven program
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int ch,Am,Bal=2500;
 do {
     printf(" 1.Deposit Balence\n 2. Widraw \n3. Balence Enquiry\n4.Exit");
     printf("Please Enter your choice\n");
     scanf("%d",&ch);
 	 
	 switch(ch)
	    { 
	      case 1:
		printf("Enter the Amount\n");
		scanf("%d",&Am);
		Bal=Bal+Am;
		printf("Your total Bal is %d\n",Bal);
		break;
	      case 2:
		printf("Enter Amount\n");
		scanf("%d",&Am);
		if(Bal>=Am)
		 {
		  Bal=Bal-Am;
		   printf("you remaining Bal is %d\n",Bal);
		  } 
		   else
			printf("Balence is not sufficiant\n");
		 break;
		case 3:
		 printf("your balence is %d\n",Bal);
		break;
		case 4:
		  exit(0);
		default :
		printf("Enter  choice Invalied\n");
	     }
	}while(1);	

 return 0;
}
