#include<stdio.h>

int main()
{
	int i = 0 , n = 0  , j;
	char a[100];
	printf("Enter a string\n");
	scanf("%s",a);
	while(a[i] != '\0')
		{
			i++;
			n++;
		}
	for(i = 0 , j = n - 1 ; i <= (n-1)/2 ;i++, j-- )
	{
		if(a[i] != a[j])
		{
			printf("Not a palindrome\n");
			return 0;
		}
	}
	printf("It is a palindrome\n");
}