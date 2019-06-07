#include<stdio.h>
#define MINUTES_TO_HOURS 60
int main(void){
	int total_minutes,hours,minutes;
	scanf("%d",&total_minutes);
	while(total_minutes>0){
		hours=total_minutes/MINUTES_TO_HOURS;
		minutes=total_minutes%MINUTES_TO_HOURS;
		printf("%d total_minutes is %d hours and %d minutes\n",total_minutes,hours,minutes);
		scanf("%d",&total_minutes);
	}
	return 0;
} 
