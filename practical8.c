/*
programmer:-Shreeja Vaishnani
date of programme:-26 July 2024
aim:-display food menu
*/

#include<stdio.h>
void main()
{
  int Burger,Pizza,Pasta,Sandwich,Frenchfries,Total,choice;
  int i,BillAmount;

  Burger=150;
  Pizza=200;
  Pasta=120;
  Sandwich=100;
  Frenchfries=80;
  Total=0;

  x:printf("Menu \n (1) Burger.....150 Rs. \n (2) Pizza....200 Rs. \n (3) Pasta....120 Rs. \n (4) Sandwich.....100 Rs. \n (5) Frenchfries.....80 Rs.\n (0) to exit \n");
  printf("Enter item number to order:");
  fflush(stdin);
  scanf("%d",&i);
  switch (i)
  {
  case 0:
    printf("Total amount of order:%d",BillAmount);
    break;
  case 1:
    BillAmount+=Burger;
    goto x;
  case 2:
    BillAmount+=Pizza;
    goto x;
  case 3:
    BillAmount+=Pasta;
    goto x;
  case 4:
    BillAmount+=Sandwich;
    goto x;
  case 5:
    BillAmount+=Frenchfries;
    goto x;
  }

}

