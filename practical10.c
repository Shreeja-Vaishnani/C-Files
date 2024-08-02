/*
programmer:-Shreeja Vaishnani
date of programme:-25 July 2024
aim:-countdown timer
*/

#include<stdio.h>
void main()
{
    int s;
    printf("Enter the second");
    scanf("%d",&s);
   for( int i=s;i>=0;i--)
   {
       printf("countdown %d \r",i);
       sleep(i);
   }
   printf("countdown completed");
}
