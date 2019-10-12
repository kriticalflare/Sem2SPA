#include<stdio.h>
int main()
{
	int a[5];
	int i , sum = 0;
	printf("Enter the 5 elements\n");
	for( i = 0 ; i < 5 ; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0 ; i <5 ; i++)
	{
		sum = sum + a[i];
		i++;
	}
	printf("%d is the sum \n",sum );
	return 0;
}