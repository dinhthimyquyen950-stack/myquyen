#include<stdio.h>
int main()
{
int m,n,a[50][50];
do
	{
		printf("\nnhap gia tri m va n:");
		scanf("\n%d",&m);
		scanf("\n%d",&n);
	}
while(m<=0 || n<=0);
printf("\nnhap gia tri cua mang:");
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("\na[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
} 

printf("\nxuat gia tri cua mang:");
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("%3d",a[i][j]);
	}
} 
	
int tong=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		tong=tong+a[i][j];
	}
} 
printf("\ntong=%3d",tong);
	return 0;	
}
