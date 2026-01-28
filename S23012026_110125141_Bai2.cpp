#include<stdio.h>
int main()

{
	FILE *f1,*f2;
	int n, tong;
	float thuong;
	int dem=0;
	int tongle=0;
	
	f1=fopen("Bai2.inp","rt");
	if(f1==NULL)
	{
		printf("Khong mo duoc tap tin Bai2.inp");
	}
	else
	{
	printf("Mo tap tin bai Bai2.inp thanh cong!!!");
	
	f2=fopen("Bai2.out","wt");
	for(int i=1; i<=n;i++)
	{
		if(i%2==0 && i%3==0)
		dem++;
		{
			printf("\nCo %d so chan va chia het cho 3");
		}
	
		if(i%2!=0)
		{
			tongle +=i;
			{
				printf("\nTong cac so le = %d",tongle);
			}
		}
	}	
	printf("\nDa ghi len tap tin Bai1.out thanh cong!!!");
	}

	
	
	fclose(f1);
	fclose(f2);



	return 0;
}