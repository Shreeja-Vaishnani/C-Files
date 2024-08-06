/*
programmer:-Shreeja Vaishnani
date of programme:-5 August 2024
aim:-multiplication table
*/

#include<stdio.h>
void main()
{
    int m,n,v,h;
    printf("Enter the num vertically");
    scanf("%d",&v);
    printf("Enter the num horizontally");
    scanf("%d",&h);
    for(m=1;m<=v;m++)
    {
        for(n=1;n<=h;n++)
        {
            printf("%4d",n*m);
        }
        printf("\n");
    }
}
