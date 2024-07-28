/*
programmer:-Shreeja Vaishnani
date of programme:-25 July 2024
aim:-calculator program to perform basic arithmetic operations
*/

#include<stdio.h>
void main()
{
    int x,y;
    char o;
    printf("Enter the first value\n");
    scanf("%d",&x);
    printf("Enter the second value\n");
    scanf("%d",&y);
    fflush(stdin);
    printf("Enter + for addition,- for subtraction,* for multiplication,/ for division\n");
    scanf("%c",&o);
    switch ( o )
    {
    case'+':
        printf("x+y=%d",x+y);
        break;
    case'-':
        printf("x-y=%d",x-y);
        break;
    case'*':
        printf("x*y=%d",x*y);
        break;
    case'/':
        printf("x/y=%d",x/y);
        break;
    default:
        printf("invalid input");
    }
}


