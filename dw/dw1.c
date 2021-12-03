// Continue,break
/*#include<stdio.h>
int main()
{
int i=1;
while(i<=10)
{
if(i==7){
i++;
continue;
}
printf("Jay shre ram =%d\n",i);
i++;
}
return 0;
}*/
#include<stdio.h>
int main()
{
  int i=1;
   do{
    if(i==4)
      continue;
     printf("%d\n",i);
     } while(++i<=10);
return 0;
}
