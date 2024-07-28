/*
programmer:-Shreeja Vaishnani
date of programme:-25 July 2024
aim:-calculate and display the simple interest
*/

#include<stdio.h>
void main()
{
    int principal_amount,simple_interest;
    float rate,time_period;
    principal_amount=50000;
    rate=5.5;
    time_period=3;
    simple_interest=(principal_amount*rate*time_period)/100;
    printf("%d",simple_interest);
}
