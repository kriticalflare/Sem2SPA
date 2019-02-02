//Simple Pattern
/*
Enter the now of rows you want
5
*
**
***
****
*****
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the now of rows you want\n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
