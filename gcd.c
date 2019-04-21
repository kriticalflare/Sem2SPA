#include<stdio.h>
int gcd(int , int);
int main()
{
	int answer, n1, n2;
	printf("Enter the 2 numbers\n");
	scanf("%d%d",&n1,&n2);
	answer=gcd(n1,n2);
	printf("%d is the gcd\n",answer );
	return 0;
}
int gcd(int n1 , int n2)
{
	if ( n2 != 0 )
		return (gcd(n2, n1%n2));
	else
		return n1;
}