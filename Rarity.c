//Rarity Calculator for SRM08
#include<stdio.h>
int main()
{
    int T,B,sum1=0,a,i;
    printf("Enter the Test Case\n");
    scanf("%d",&T);
    printf("Enter the number of boxes\n");
    scanf("%d",&B);
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
