// Enter start and end point
#include<stdio.h>
int main()
{
int start,end,i;
printf("Enter the number  two want to start and end\n");
scanf("%d%d",&start,&end);
if(start<=end)
{
printf("The series is \n");
while(start<=end)
{
printf("%d\t",start);
i++;
}
}
else { 
if(start>=end)
{
printf("The series is \n");
while(start>=end)
{
printf("%d\t",start);
start--;
}
}
else
printf("Enter numberes are equal\n");
}

return 0;
}
