/*
programmer:-Shreeja Vaishnani
date of programme:-26 July 2024
aim:-Raman is wealthier or Suman
*/

#include<stdio.h>
void main()
{
    float a,b,bunglow,flat,car,apartment,hotel,car1;

    // wealth of Raman
    bunglow=12000000;
    flat=6000000;
    car=3000000;

    // a is total wealth of Raman
    a=bunglow+flat+car;
    printf("total wealth of Raman is %f\n",a);

    // wealth of Suman
    apartment=11000000;
    hotel=8000000;
    car1=8000000;
    b=apartment+hotel+car1;
    printf("total wealth of Suman is %f\n",b);

    // comparision of wealth
    if (a>b)
    {
        printf("Raman is wealthier than Suman");
    }
    else if (b>a)
    {
        printf("Suman is wealthier than Raman");
    }
    else if (a=b)
    {
        printf("both are equally wealthier");
    }
}
