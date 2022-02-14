#include<stdio.h>
// end with dos
#define DAU_CHAM '.'
int main(){
	char c; 
 int idem; 
 for(idem = 0; (c = getchar()) != DAU_CHAM; ) 
 idem++; 
 printf("So ki tu: %d.\n", idem); 
// getch();
}