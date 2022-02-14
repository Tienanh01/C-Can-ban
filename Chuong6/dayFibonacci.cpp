// in day fibonacci toi vi tri n

#include<stdio.h>
int main(){
	int f1 = 1;
	int f2 = 1;
	int fn;
	int i  =2;
	int n  = 8;
	if(n < 2 ){
	
	}
	else{
		printf("0 , 1 , 1 ");
		while(i< n){
			fn = f2 + f1;
			f1 = f2;
			f2 = fn;
			i++;			
			printf(", %d",fn);
		}
	}
}