/*
programmer:-Shreeja Vaishnani
date of programme:-26 July 2024
aim:-to assign grade according to marks
*/

#include<stdio.h>
void main()
{
    int m;
    printf("enter the marks of student:");
    fflush(stdin);
    scanf("%d",&m);
    ((m>=90)?(printf("grade A")):((m>=80)?(printf("grade B")):((m>=70)?(printf("grade C")):((m>=60)?(printf("grade D")):((m<=60)?(printf("grade E")):(printf("no grade")))))));
}
