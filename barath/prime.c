#include<stdio.h>
void main()
{
int a,i;
scanf("%d",&a);
for(i=2;i<a-1;i++)
{
if(!(a%i))
{printf("not prime");
break;}
}
if(i>=a-1)
printf("prime");
}
