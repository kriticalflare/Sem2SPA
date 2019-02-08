#include<stdio.h>
void main()
{
int a,c=0;
scanf("%d",&a);
for(int i=2;i<a-1;i++)
{
if(!(a%i))
{
printf("%d\n",i);
c++;
}
}
if(!c)
printf("no factor\n");
}
