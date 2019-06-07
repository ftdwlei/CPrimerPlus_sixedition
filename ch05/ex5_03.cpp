#include<stdio.h>
#define DAYS_TO_WEEK 7
int main(void){
	int total_days,week,days;
	scanf("%d",&total_days);
	while(total_days>0){
		week=total_days/DAYS_TO_WEEK;
		days=total_days%DAYS_TO_WEEK;
		printf("%d days are %d weeks, %d days.\n",total_days,week,days);
		scanf("%d",&total_days);
	}
	return 0;
} 
