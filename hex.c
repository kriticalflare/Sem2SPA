#include<stdio.h>

int main()
{
	int opt, i , j , n ;
	int a[100];
	char h[100];
	printf("Choose from the options\n");
	printf("1. Binary\n");
	printf("2. Octal\n");
	printf("3. Hexadecimal\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1: printf("Enter the number\n");
				scanf("%d",&n);
				for( i = 0 ; n > 0 ; i++)
				{
					a[i] = n % 2;
					n = n/2;
				}
				for ( j = i -1 ; j>= 0 ; j-- )
				{
					printf("%d", a[j]);
				}
				printf("\n");
				break;
		case 2: printf("Enter the number\n");
				scanf("%d",&n);
				for( i = 0 ; n > 0 ; i++)
				{
					a[i] = n % 8;
					n = n/8;
				}
				for ( j = i -1 ; j>= 0 ; j-- )
				{
					printf("%d", a[j]);
				}
				printf("\n");
				break;

		case 3: printf("Enter the number\n");
				scanf("%d",&n);
				for( i = 0 ; n > 0 ; i++)
				{
					a[i] = n % 16;
					n = n/16;
					if(a[i] > 9)
					{

						h[i]= a[i]+55;
					}
					else
						h[i]= a[i]+ 48;
				}
				for ( j = i -1 ; j>= 0 ; j-- )
				{
					printf("%c", h[j]);
				}
				printf("\n");
				break;
				
		default : printf("Invalid input\n");
				  break;

	}
	return 0;
}
