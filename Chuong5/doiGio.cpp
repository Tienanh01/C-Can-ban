#include<stdio.h>
int main(){
	int hours,minutes, seconds;
	printf("Input hours : ");
	scanf("%d",&hours);
	printf("Input minutes : ");
	scanf("%d",&minutes);
	printf("Input seconds : ");
	scanf("%d",&seconds);
	printf("gio %d , phut %d , giay %d\n",hours,minutes,seconds);
	int moreSeconds;
	printf("Input more seconds : ");
	scanf("%d",&moreSeconds);
	if((moreSeconds + seconds) >= 60){
		int dem = (moreSeconds+seconds)/60;
		minutes+= dem;
		seconds = (moreSeconds+seconds) - dem*60;
	}
	if(minutes >= 60){
		int dem2 = minutes/60;
		hours +=dem2;
		minutes = minutes - dem2*60;
	}
	printf("gio %d , phut %d , giay %d",hours,minutes,seconds);
}