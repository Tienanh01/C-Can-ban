#include<stdio.h>
 int main(){
 	int x = 673;
 	int a ;
 	int b ;
 	int c ;
 	for(int i = 100;i<1000;i++){
 		a= (i/100);
 		b =  (i- (i/100)*100)/10;
 		c = i - a*100  - b*10;
// 		printf("%d ",i);
 		if((a +b + c )== (a*b*c)){
 			printf("%d\n",i);
 			
		 }
	 }
 }