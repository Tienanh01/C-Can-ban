#include<stdio.h>
// chuyen he 10 sang he 2
int main(){
	int decimalNumber;
	printf("Nhap so thap phan : ");
	scanf("%d",&decimalNumber);
	
	char binaryNumber[10] = "1";
	while(decimalNumber/2 != 0){
		if(decimalNumber%2 ==0){
			binaryNumber+="0";
			decimalNumber/=2;
		}
		else{
			binaryNumber+="1";
			decimalNumber = decimalNumber-1;
			decimalNumber/=2;
		}
		
	}
	printf("so nhi phan la : %s",binaryNumber);
	
	
}