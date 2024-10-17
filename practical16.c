/*
programmer:-Shreeja Vaishnani
date of programme:-30 august 2024
aim:-arrange items as per there ascending order of there price tags
*/

#include <stdio.h>

void main()
{
    int A[50],i,k,a,b,c,q;
    // k for total items selected
    // i  for selected item prize

    printf("Enter the values of total items selected-");
    scanf("%d",&k);

    for(a=0;a<k;a++)
    {
        printf("Enter the %d item price :",a+1);
        scanf("%d",&A[a]);
    }
    for(b=0;b<k;b++)
    {
        for(c=b+1;c<k;c++)
        {
            if(A[b]>A[c])
            {
                i=A[b];
                A[b]=A[c];
                A[c]=i;
            }
        }
    }
    printf("-------------------------------------------\n");
    printf("Sorted items:\n");
    for( q=0;q<k;q++)
     {
         printf("The %d item price is %d\n",q+1,A[q]);
     }
     printf("----------------------------------------------\n");
     printf("My name is Shreeja Vaishnani.\nMy ID is 24CE138");
}
