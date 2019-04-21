#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char fname[20], name [20], addr[20];
	int age ;
	float salary;
	printf("Enter the filename \n");
	gets(fname);
	fp = fopen(fname, "w");
	printf("Enter name\n");
	gets(name);
	fflush(stdin);
	fprintf(fp, "%s\n", name );
	printf("Enter the address\n");
	gets(addr);
	fflush(stdin);
	fprintf(fp, "%s\n", addr );
	printf("Enter the age\n");
	scanf("%d",&age);
	fflush(stdin);
	fprintf(fp, "%d\n", age);
	printf("Enter salary\n");
	fflush(stdin);
	scanf("%f",&salary);
	fprintf(fp, "%f\n",salary );
	fclose(fp);
}