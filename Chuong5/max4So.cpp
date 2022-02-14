#include<stdio.h>
int main(){
	// chuong trinh tim so nguyen lon nhat tu 4 so 
	int a = 9 ,b=5,c=2,d=1;
	int max1 ,max2;
	max1 = (a>b)?a:b;
	max2 = (c > d)?c:d;
	printf("Gia tri max la : %d",(max1>max2)?max1:max2);
}