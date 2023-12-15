//C Program to Display Current Date and Time.

#include<stdio.h>
#include<time.h>


int main()
{

    time_t t;
    time (&t);

    printf("\n%s",ctime(&t));



   return 0;
}
