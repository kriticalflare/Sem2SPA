#include <stdio.h>
void swap(int, int);
int main()
{
	int a, b;
	printf("Enter 2 numbers to be swapped\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("after swapping a = %d , b = %d \n",a,b);
}