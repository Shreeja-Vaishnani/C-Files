/*
programmer:-Shreeja Vaishnani
date of programme:-5 August 2024
aim:-multiplication table
*/

#include<stdio.h>
void main()
{
    int row,column,x,y;
    printf("give number of column");
    scanf("%d",&column);
    printf("give number of row");
    scnf("%d",&row);
    for(x=1;x<=row;x++)
    {
        for(y=1;y<=column;y++)
        {
            if(y%2==0)
            {
                printf(" 0 ");
            }
            else
            {
                printf(" 1 ");
            }
            printf("\n");
        }
    }
}
