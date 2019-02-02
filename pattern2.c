/*
A simple pattern using odd/even conditions
Enter the now of rows you want
6
1
21
123
4321
12345
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows you want\n\n");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(j=i;j>=1;j--)
            {
                printf("%d",j);

            }
        }
        else
        {

            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}
