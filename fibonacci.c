/*Fibonacci Sequence

Whats Fibonacci Sequence ?
https://www.mathsisfun.com/numbers/fibonacci-sequence.html

*/

#include<stdio.h>
int main()
{
    int nextterm,term1=1,term2=1,i,n;
    printf("How many terms of the sequence do you want?\n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",term1);
        nextterm=term1+term2;
        term1=term2;
        term2=nextterm;
    }
    return 0;
}
