#include<stdio.h>
void main()
{
int n,bar,la;
printf("emter");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
for(int j=1;j<n-i;j++)
{
printf("  ");
}
for(int k=0;k<(i+1);k++)
{
if(k==0||i==0)
bar=1;
else
bar=bar*(i-k+1)/k;
printf("%4d",bar);
}
printf("\n");
}

}

