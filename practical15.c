/*
host name : shreeja vaishnani
   date :30/8/2024
*/

void main()
{
    int a[25],p=0,n=0,e=0,o=0;
    // p for positive number
    // n for negative number
    // e for even number
    // o for odd number
    for(int x=0;x<25;x++)
    {
        printf("Enter the %d value : ",x+1);
        scanf("%d",&a[x]);
    }
    for(int x=0;x<25;x++)
    {
        if(a[x]<0)
        n++;
        else
        p++;
        if(a[x]%2==0)
        e++;
        else
        o++;
    }
    printf("Total positive numbers are %d.\n",p);
    printf("Total nagative numbers are %d.\n",n);
    printf("Total even numbers are %d.\n",e);
    printf("Total odd numbers are %d.\n",o);
    printf("-----------------------------------\n");
    printf("My name is Shreeja Vaishnani.\nMy ID is 24CE138");
}
