//C Program to Convert Hours into Minutes and Seconds.

#include<stdio.h>
#include<time.h>


int main()
{

 int hour,minute,second;
 printf("Enter hour :");
 scanf("%d",&hour);  

minute=hour*60;

printf("\nMinutes = %d",minute);

second=minute*60;

printf("\nSecond = %d",second);

   return 0;
}
