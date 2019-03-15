#include<stdio.h>
int gcd(int n,int n1)
{
if(n1!=0)
gcd(n,n%n1);
else
return n;
}
void main()
{
printf("enter 2 numbers");
int n,n1;
scanf("%d %d",&n,&n1);
int temp;
if(n<n1)
{
temp=n;
n=n1;
n1=temp;
}
int gcds=gcd(n,n1);
printf("%d",gcds);

}

