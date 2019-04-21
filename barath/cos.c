#include<stdio.h>
#include<math.h>
void main()
{
int fact=1,																																															n,sign=-1;
float cur,sum=0,x;
float power;
scanf("%f %d",&x,&n);
x=x*3.14/180;
//sum=x;   //for sin enable this
sum=1;     //for cos enable this
for(double i=2;i<=n;i=i+2) //for sin i =3 and cos i=2
{
fact=fact*i*(i-1);
power=pow(x,i);
cur=power/fact;
sum=sum+(cur*sign);
sign=sign*-1;
}
printf("%f",sum);
}
