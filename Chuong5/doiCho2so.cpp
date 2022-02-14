#include<stdio.h>
int main(){
	// doi cho 2 so 
	int a = 9, b= 10,temp;
	printf("Gia tri ban dau cua %d ",a);
		printf("Gia tri ban dau cua %d ",b);
	temp = a;
	a = b;
	b = temp;
	printf("Gia tri luc sau cua %d ",a);
		printf("Gia tri luc sau cua %d ",b);
}