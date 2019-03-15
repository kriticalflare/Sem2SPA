#include<stdio.h>
void transpose(int a[10][10], int n, int r)
{
int b[n][r];
for(int i=0;i<n;i++)
{for(int j=0;j<r;j++)
{
b[i][j]=a[j][i];
}
}
for(int i=0;i<n;i++)
{for(int j=0;j<r;j++)
{
printf("%d",a[i][j]);
printf("%d",b[i][j]);
}
printf("\n");
}
}
void main()
{
int n,r;
scanf("%d %d",&n,&r);
int a[n][r];
for(int i=0;i<n;i++)
{for(int j=0;j<r;j++)
{
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<n;i++)
{for(int j=0;j<r;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
transpose(a,n,r);
}
