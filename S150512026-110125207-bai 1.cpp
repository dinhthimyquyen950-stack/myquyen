#include<stdio.h>
int main(){
	int a[50][50];
	int i,j,m,n;
	// do là lap lai
	do{
		printf("nhap so dong =");
		scanf("%d",&m);
		printf("nhap so cot =");
		scanf("%d",&n);
		// if la cau nhac de nhap lai
		if(m<=0 || n<=0) printf("\nban nhap sai.nhap lai m,n>0!\n");
	}while(m<=0 || n<=0);
	
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	// xuat mang 
	printf("\nxuat mang:\n");
	for(i=0;i<m;i++)
	{printf("\n");
	for(j=0;j<n;j++){
		printf("%5d",a[i][j]);
	}
	}
	 //tinh tong
	 int s=0;
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 s=s+a[i][j];
		 }
	 }
	 printf("\ntong tat ca phan tu=%d",s);
	 return 0;
}


