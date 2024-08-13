/*
programmer:-shreeja vaishnani
date of program:-25 July 2024
aim:-draw the nested loop
*/

#include<stdio.h>
void main()
{
    int R,r,c,n;
    char x;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(R=1;R<=n;R++)
    {
        for(c=1;c<=(n-R);c++)
        {
            printf("  ");
        }
        x='A';
        for(c=(n-R+1);c<=n;c++)
        {
        printf("%2c",x);
        x++;
        }
        x-=2;
        for(c=1;c<=R-1;c++)
        {
            printf("%2c",x);
            x--;
        }
       printf("\n");
    }
}
