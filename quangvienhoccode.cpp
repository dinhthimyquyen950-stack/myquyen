#include <stdio.h>
int main ()
{
	int m,n;
	int a[50][50];
	int tong=0;
	do
	{
		printf("Nhap m : ");
		scanf("%d",&m);
		printf("Nhap n : ");
		scanf("%d",&n);
	}
	while (m<0||n<0);
	printf("Dong m : %d ",m);
	printf("Cot n : %d ",n);
	for (int i=0;i<m;i++)
	{
	   for (int j=0;j<n;j++)
	   {
	   	printf("\n a[%d][%d] = " ,i,j);
	   	scanf("%d",&a[i][j]);
	   }
	}
	printf("\n Mang 2 chieu : \n ");
		for (int i=0;i<m;i++)
	{
	   for (int j=0;j<n;j++)
	   {
	   	printf("%d\t" ,a[i][j]);
	   }
	   printf("\n");
	}
	for (int i=0;i<m;i++)
	{
	   for (int j=0;j<n;j++)
	   {
	   tong+=a[i][j];
	   }
	}
	printf("Tong cac phan tu trong mang : %d ",tong);
	return 0;
}