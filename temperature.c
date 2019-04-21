#include<stdio.h>

int main()
{
	float f , c;
	printf("Enter the temperature in celsius\n");
	scanf("%f",&c);
	f = (9.0/5*c)+32;
	printf("The temperature in fahrenheit is %f \n",f);
	printf("Enter the temperature in fahrenheit\n");
	scanf("%f",&f);
	c = (f - 32 ) * 5/9 ;
	printf("The temperature in fahrenheit is %f \n",f);
	return 0;
}