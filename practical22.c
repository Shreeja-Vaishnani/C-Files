#include<stdio.h>

int part1(int m[],int);
void part2(int ,int);
void part3(int m[],int );
void main( )
{
    int num,i,tmarks;

    printf("Enter the number of student's :");
    scanf("%d",&num);
    int marks[num];
    printf("Enter the CCP marks of the student's :\n");
    for(i=0;i<num;i++)
    {
        printf("%d) Student marks :",i+1);
        scanf("%d",&marks[i]);
    }
    tmarks=part1(marks,num);
    printf("Total marks: %d\n",tmarks);
    part2(tmarks,num);

    part3(marks,num);



}
int part1(int m[],int n)
{
    static int total;
    int i;
    for(i=0;i<n;i++)
    {
        total=total+m[i];
    }
    return total;

}
void part2(int m,int n)
{
    float arg= (float)m/n;
    printf("Average Marks: %.2f\n",arg);
}
void part3(int m[],int n)
{
    int i,h=m[0],l=m[0];
    for(i=1;i<n;i++)
    {
        if(h<m[i])
        {
            h=m[i];
        }
        if(l>m[i])
        {
            l=m[i];
        }

    }
    printf("Highest Marks: %d\n",h);
    printf("Lowest Marks: %d\n",l);
    printf("--------------------------------------\n");
    printf("My name is Shreeja Vaishnani.\nMy Id is 24CE138");

}
