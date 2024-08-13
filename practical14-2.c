/*
programmer:-shreeja vaishnani
date of program:-25 July 2024
aim:-draw the nested loop
*/

#include<stdio.h>
void main()
{
    int n,i,c,x,a;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(c=1;c<=(n-i);c++)
        {
            printf("  ");
        }
        x=1;
        for(a=1;a<=i;a++)
        {
            printf("%2d",x);
            x++;
        }
        printf("\n");
    }

}
