/*
programmer:-Shreeja Vaishnani
date of programme:-25 July 2024
aim:-matchsticks game
*/

#include<stdio.h>
void main()
{
    int player,x,matchstick=21,computer;
    while(matchstick>1)
    {
        printf("enter your number");
        scanf("%d",&player);
        computer=5-player;
        printf("computer has chosen %d\n",computer);
        matchstick-=(computer+player);
        printf("matchstick left %d\n",matchstick);

    }
    if(matchstick==1)
        printf("you lost");

    }

