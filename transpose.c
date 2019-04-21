#include<stdio.h>
void transpose(int a[10][10], int r, int c );
int main()
{
	int r , c , i ;
	int a[10][10];
	printf("Enter the number of rows and columns\n");
	scanf("%d%d", &r, &c);
	printf("Enter the elements\n");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transpose(a, r, c);
	return 0;
}
void transpose(int a[10][10], int r , int c)
{
	int b[10][10];
	int i , j;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	printf("The transpose is \n");

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

}