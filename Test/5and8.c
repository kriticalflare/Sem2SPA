#include<stdio.h>
int main()
{
    int num=0,i=0;
    while(i<=10)
    {
        if((num%5==0)&&(num%8==0))
        {
            printf("%d is a divisble by both 5 and 8",num);
            num=num+1;
            i=i+1;

        }
        else
            num=num+1;
    }
    return 0;
}
