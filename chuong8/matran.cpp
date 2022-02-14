// viet chuong trinh nhap vao 1 matran so nguyen m * n 
#include<stdio.h>
#include<conio.h>
#define max  50
int main(){
	int arr[max][max] ;
	int n,m;
	int i,j;
	printf("Nhap so hang cua mang : \n");
	scanf("%d",&n);
	printf("Nhap so cot cua ma tran : \n");
	scanf("%d",&m);
	for(int i = 0;i<n;i++){
		for(j = 0 ;j<m;j++){
			printf("\nNhap phan tu thu arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nIn ma tran\n");
	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			printf("%3d",arr[i][j]);		
		}
			printf("\n");
	}
		printf("\nIn ma tran thu tu nguoc \n");
	for( int i = n-1;i >= 0;i--){
		for(int  j = m-1 ;j >= 0;j--){
			printf("%3d",arr[i][j]);		
		}
			printf("\n");
	}
}