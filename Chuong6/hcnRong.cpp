#include<stdio.h>

int main() {
	// in ra hình chữ nhật rỗng

//	******
//	*    *
//	******
	int length;
	int width;
	int rong;
do{
		printf("Nhap chieu dai hinh chu nhat ");
	scanf("%d",&width);
	printf("Nhap chieu rong hinh chu nhat : ");
	scanf("%d",&length);
}while(width<=length);
	for(int i = 0; i<length; i++) {
		for(int j = 0; j<width; j++) {
			if(i>0 && i<length-1){
				printf("*");
				for(int k = 0;k<width-2;k++){
					printf(" ");
				}
				printf("*");
				break;
			}
			else{
					printf("*");
			}
	
		}
			printf("\n");
	}
}