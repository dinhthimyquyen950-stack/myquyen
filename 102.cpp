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
	for(int j=0;j<n;j++)
	{
		printf("%3d",a[i][j]);
	}
}

int tich=1,dem=0,toanduong=0,max=a[0][0],min=a[0][0],X;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		tich=tich*a[i][j];
		if(a[i][j]<0)
		{
			dem++;
		}
	}
}
printf("\nTich=%d",tich);
printf("\nSo am trong mang la:%d",dem);

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		tich=tich*a[i][j];
		if(max<a[i][j])
		{
			max=a[i][j];
		}
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		tich=tich*a[i][j];
		if(min>a[i][j])
		{
			min=a[i][j];
		}
	}
}
printf("\nMax=%d",max);
printf("\nMin=%d",min);

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		tich=tich*a[i][j];
		if(a[i][j]>0)
		{
			toanduong++;
		}
	}
}

if(toanduong==n*n)
{
	printf("\nMang toan duong");
}
else
{
	printf("\nMang khong toan duong");
}
printf("\nX =");
scanf("%d",&X);

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(X==a[i][j])
		{
			printf("\nX o dong %d, cot %d ",i,j );
		}
		else
		{
			printf("\nKhong tim thay X");
		}
	}
}



	return 0;
}





















































