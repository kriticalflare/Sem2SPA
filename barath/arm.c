#include<stdio.h>
#include<math.h>
int arm(int n)
{
int i=0,temp=n;
while(temp)
{
temp=temp/10;
i++;
}
int sum=0;
for(int j=0;j<i;j++)
{
sum=sum+pow(n%10,i);
n=n/10;
}
return sum;
}
void main()
{
int n,n1;
printf("enter a number\n");
scanf("%d",&n);
n1=arm(n);

if(n==n1)
printf("Armstrong");
else
printf("not Armstrong");
}
