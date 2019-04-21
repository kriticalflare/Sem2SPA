#include<stdio.h>
void concat(char[] , char[]);
int main()
{
	char p[100], q[100];
	printf("Enter the string\n");
	scanf("%s", p);
	printf("Enter the second string\n");
	scanf("%s", q);
	concat(p,q);
	return 0;
}
void concat(char p[100],char q[100])
{
	int c = 0 , d =0;
	while(p[c] != '\0')
	{
		c++;
	}
	while(q[d] != '\0')
	{
		p[c] = q[d];
		c++;
		d++;
	}
	p[c] = '\0';
	printf("The concated string is %s \n", p);
}