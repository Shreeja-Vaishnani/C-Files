/*
programmer:-shreeja vaishnani
date of program:-25 July 2024
aim:-diamond pattern
*/

#include<stdio.h>
void main()
{
    int n,n1,n2,r1,r2,c1,c2,c3,c4,c5,c6;
    printf("Enter the value of rows:");
    scanf("%d",&n);
    n1=(n/2)+1;
    n2=(n/2);
    for(r1=1;r1<=n1;r1++)
    {
        for(c1=1;c1<=(n1-r1);c1++)
        {
            printf(" ");
        }
        for(c2=1;c2<=r1;c2++)
        {
            printf("*");
        }
        for(c3=1;c3<=(r1-1);c3++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(r2=1;r2<=n2;r2++)
    {
        for(c4=1;c4<=r2;c4++)
        {
            printf(" ");
        }
        for(c5=1;c5<=(n2-r2);c5++)
        {
            printf("*");
        }
        for(c6=1;c6<=(n2-r2+1);c6++)
        {
            printf("*");
        }
        printf("\n");
    }

}
