#include<stdio.h>

int main(){
	int month;
	printf("Nhap thang trong nam  : ");
	scanf("%d",&month);
	switch(month){
		case 1: case 2:case 3 : printf("Quy 1 :");
								break;
		case 7: case 5: case 6: printf("Quy 2 :");
								break;
	default : printf("Thang khong hop le : ");									
	};

}