/*
programmer:-Shreeja Vaishnani
date of programme:-5 August 2024
aim:-multiplication table
*/

#include<stdio.h>
void main()
{
    int day,amount,x;
    printf("total the number of days of event will occur:");
    scanf("%d",&day);
    amount=0;
    for(x=1;x<=day;x=x+1)
    {
        if (x%2==0)
        {
            amount+=200;
        }
    }
    printf("%d",amount);
}
