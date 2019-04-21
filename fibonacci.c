#include<stdio.h>

int main()
{
	int n , i , t1 = 1 , t2 = 1, nt ;
	printf("Enter the length of the series\n");
	scanf("%d",&n);
	for ( i = 0 ; i < n ; i++)
	{
		printf("%d  ", t1 );
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
	}
	return 0;
} 