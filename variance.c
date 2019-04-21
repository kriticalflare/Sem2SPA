#include<stdio.h>
#include <math.h>
int main()
{
	int n , i , sum=0;
	int a[100];
	float variance, mean, deviation;
	printf("how many elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		sum = sum + a[i];
	}
	mean = (float)sum / n;
	sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum = sum + (float)(pow(a[i]- mean , 2));
	}
	variance = sum / (n - 1);
	deviation = sqrt(variance);
	printf("%f is the variance\n",variance );
	printf("%f is the standard deviation\n",deviation );
	return 0;
}
