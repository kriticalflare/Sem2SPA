//Rarity Calculator for SRM08
#include<stdio.h>
int main()
{
    int T,B,sum1=0,a,i,j;
    scanf("%d",&T);
    for(j=1;j<=T;j++)
    {
    scanf("%d",&B);
    sum1=0;
    for(i=1;i<=B;i++)
    {
        scanf("%d",&a);
        sum1=sum1+a;
    }
    if(sum1<=25)
    {
        printf("N");
    }
     if(sum1>25&&sum1<=50)
    {
        printf("E");
    }
     if(sum1>50&&sum1<=75)
    {
        printf("M");
    }
    if(sum1>75)
    {
        printf("L");
    }
    }
}
