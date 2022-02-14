#include<stdio.h>

int main(){
	int F1 = 1;
	int F2 = 1;
	int F0 = 0;
	int n ;
	int i = 2;
	int Fn;
	printf("Nhap gia tri cua n");
	scanf("%d",&n);
	
	if(n < 0){
	
	}else if(n == 0){
		printf("F(%d) = 0",n);
	}
	else if( n> 0 && n < 2){
		printf("F(%d) = 1",n);
	}else{
		while(i <=n)	{
				Fn = F2 + F1;
			F1 = F2;
		F2 = Fn;
		i++;
		}
	}
	printf("Gia tri fibonacci o vi tri %d la %d",n,Fn);
}