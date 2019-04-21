#include<stdio.h>
#include <math.h>
int main()
{	
	int n ,i, sign = -1, fact = 1;
	float  current , x , power, sum  ;
	printf("Enter the degree and number of terms\n");
	scanf("%f%d",&x,&n);
	x = x * 3.14 / 180;
	sum = 1;
	for(i= 2 ; i <=n ; i = i + 2 )
	{
		fact = fact * i * (i -1);
		power  =  pow(x, i);
		current = power/fact;
		sum = sum + current*sign;
		sign = sign*-1;	
	}
	printf("sum is %f \n",sum );
	return 0;
}