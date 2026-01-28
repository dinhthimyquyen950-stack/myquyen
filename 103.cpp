#include<stdio.h>
int main()
{
	int n, a[50][50];
	do
	{
		printf("\nnhap gia tri n:");
		scanf("\n%d",&n);
	}
while(n<=0);
printf("\nNhap gia tri cua mang:");
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("\na[%d][%d]=",i,j);
		scanf("%2d",&a[i][j]);
	}
}

printf("\nxuat gia tri cua mang:");
for(int i=0;i<n;i++)
{
	printf("\n");
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
		if(j==i)
		{
			tong=tong+a[i][j];
		}
	}
}

printf("\nTong =%d",tong);

int min=a[n-1][n-1],demchan=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(min>a[i][n-1-i])
		{
			min=a[i][n-1-i];
		}
	}
}
printf("\nMin= %d",min);

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(i<j)
		{
			if(a[i][j]%2==0)
			{
				demchan++;
			}
		}
	}
}
printf("\nSo chan cua duong cheo chinh la %d",demchan);

printf("\nSo le trong tam giac duoi duong cheo phu(tinh luon duong cheo phu)");
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(i+j>=n-1)
		{
			if(a[i][j]%2!=0)
			{
				printf("%3d",a[i][j]);
			}
			
		}
	}
}
 return 0;
}

























