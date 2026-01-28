#include<stdio.h>
int TinhGiaithua(int n);
int main()
{
int n;
do
{
	printf("n=");
	scanf("%d",&n);
}
while(n<=0);
 int tong;
 tong= TinhGiaithua(n);	
printf("\n%d",tong);
	return 0;
 } 
 
 int TinhGiaithua(int n)
 {
 	if(n==1)
 	{
 		return 1;
	 }
	else{
		return (n*TinhGiaithua(n-1));
	}
 }
