#include<stdio.h>
int main(){
	printf("Bai hoc c dau tien");
	
//	 Chuong trinh nhap va in ra man hinh gia tri bien 
int i;
printf("\nNhap vao 1 so : " );
scanf("%d",&i);
printf("So ban vua nhap la : %d\n",i);
//getchar();

// Chuong trinh nhap vao 2 so nguyen duong va in ra tong
//int a, b;
//printf("Nhap so nguyen a : ");
//scanf("%d",&a);
//printf("Nhap vao so nguyen b : ");
//scanf("%d",&b);
//int tong ;
//tong = a+b;
//printf("Tong cua 2 so nguyen a va b la : %d\n",tong);
//printf("Tong cua %d va %d la %d",a,b,a+b);

// Chuong trinh in ra dien tich hinh tron

//#define PI 3.14       //  dinh nghia gia tri cua pi la 3.14
//float R;
//printf("\nNhap vao ban kinh hinh tron : ");
//scanf("%f",&R);
//printf("Dien tich hinh tron la : %.2f\n",PI*R*R);

// Kiem tra so lon be : 
printf("\nKiem tra so lon nhat \n");
int a1,b1;
 a1 =5;
 b1 = 6;
 if(a1>b1){
 	printf("max %d",a1); 	
 }else{
 	printf("max %d",b1);
 }
 

}
