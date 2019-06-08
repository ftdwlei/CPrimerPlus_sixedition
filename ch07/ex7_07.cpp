#include<stdio.h>
int main(void){
	printf("Enter work hours: ");
	double hours,salary=0,taxes=0,net_income=0;
	scanf("%lf",&hours);
	
	if(hours<=40){
		salary=10*hours;
	} else{
		salary=10*40+(hours-40)*10*1.5;
	}
	
	if(salary<=300){
		taxes=salary*0.15;
	}else if(salary<=450){
		taxes=300*0.15+(salary-300)*0.2;
	}else{
		taxes=300*0.15+150*0.2+(salary-450)*0.25;
	}
	
	net_income=salary-taxes;
	printf("%lf %lf %lf\n",salary,taxes,net_income);
	return 0;
} 
