#include <stdio.h>
void armstrong(int);
int main()
{
	int n ;
	printf("Enter the number to be checked\n");
	scanf("%d",&n);
	armstrong(n);
	return 0;
}
void armstrong(int n)
{
	int temp , sum = 0, rem ;
	temp = n;
	while(n>0)
		{
			rem = n % 10 ;
			sum = sum + rem*rem*rem;
			n = n/10; 
		}
	if(temp==sum)
	{
		printf("armstrong number\n");
	}
	else 
		printf("Not an armstrong number\n");
}