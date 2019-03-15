#include<stdio.h>
#include<math.h>
void main()
{
int n;
scanf("%d",&n);
int me[n];
float mean=0,sum,var,sd;
for(int i=0;i<n;i++)
{
scanf("%d",&me[i]);
mean=mean+me[i];
}
mean=mean/n;
for(int i=0;i<n;i++)
{
sum=sum+pow(me[i]-mean,2);
}
var=sum/(n-1);
sd=sqrt(var);
printf("\n%f %f %f",mean,var,sd);
}
