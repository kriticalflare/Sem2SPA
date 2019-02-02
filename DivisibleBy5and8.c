#include <stdio.h>

int main()
{
    int num=1,i=1;
    while(i<=10)
    {
        if( num%5 == 0 && num%8 == 0)
        {
            printf("%d is divisble by both 5 and 8\n",num);
            num=num+1;
            i++;
        }
        else
            num++;
    }
    return 0;
}
