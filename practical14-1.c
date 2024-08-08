/*
programmer:-Shreeja Vaishnani
date of programme:-5 August 2024
aim:-multiplication table
*/

#include<stdio.h>
void main()
{
    int n,x,y;
    printf("give value  n");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            if(y%2==0)
            {
                printf(" 0 ");
            }
            else
            {
                printf(" 1 ");
            }
        }
printf("\n");
    }

}
