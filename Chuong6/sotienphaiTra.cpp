//Có 4 loại tiền 1, 5, 10, 25 và 50 đồng. Hãy viết chương trình nhập vào số tiền
//sau đó cho biết số số tiền trên gồm mấy loại tiền, mỗi loại bao nhiêu tờ.

#include<stdio.h>
#include<conio.h>
#define max 5
int main(){
int itien[max] = 	{50,25,10,5,1};
int i , isotien,isoto;
printf("Nhap vao so tien : ");
scanf("%d",&isotien);
// kiem tra tung so tien trong mang neu đúng thì làm
for(int i = 0;i<max ;i++){
	isoto = isotien/itien[i];
	printf("%4d to %2d dong\n",isoto,itien[i]);
	isotien = isotien%itien[i];
}

}