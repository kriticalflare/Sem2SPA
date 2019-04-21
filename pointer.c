#include<stdio.h>
void show(int *);
int main()
{
	int a[10] , i ;
	printf("Enter the 10 elements in array\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&a[i]);
	}
	show(a);
	return 0;
}
void show(int *a)
{
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
	}
}