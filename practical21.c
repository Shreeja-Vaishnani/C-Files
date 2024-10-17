#include<stdio.h>
#include<math.h>
float triangle_area(int,int,int);
 float check(int,int,int);
void main()
{
    int a,b,c;
    printf("\nenter the value of three sides : ");
    scanf("%d%d%d",&a,&b,&c);
    float ans=check(a,b,c);

   printf("ans is %2f\n",ans);
   printf("---------------------------\n");
   printf("My name is Shreeja Vaishnani.\nMy Id is 24CE138");
}

float check(int a,int b,int c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        float k=triangle_area(a,b,c);
        return k;

    }
    else
    {
        printf("\ninvalid input");
    }
}

float triangle_area(int a,int b,int c)
{
    float s=((a+b+c)/2);
    float ans=(s*(s-a)*(s-b)*(s-c));
    float k=sqrt(ans);
    return k;
}

