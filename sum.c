#include<stdio.h>
int main()
{
	int a[10];
	int i , sum = 0;
	int *p;
	printf("Enter the 10 elements\n");
	for( i = 0 ; i < 10 ; i++)
	{
		scanf("%d",&a[i]);
	}
	p = a;
	for(i = 0 ; i <10 ; i++)
	{
		sum = sum + *p;
		p++;
	}
	printf("%d is the sum \n",sum );
}