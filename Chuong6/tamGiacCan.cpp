#include<stdio.h>
// Hien thi tam giac can
int main(){
	int sodong  = 5; 
	
	for(int i = 1;i<=sodong ;i++){
		for(int j = i;j< sodong ;j++){
			printf(" ");
		}
		for(int j = 1;j<=2*i-1 ;j++){
			printf("*");
		}
		printf("\n");
	}
}