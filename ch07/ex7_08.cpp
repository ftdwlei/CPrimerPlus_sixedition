#include<stdio.h>
int main(void){
	double rate,hours,salary=0,taxes=0,net_income=0;
	char ch;
		
	do{	
		printf("*****************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr                          2) $9.44/hr\n");
		printf("3) $10.00/hr                         4) $11.20/hr\n");
		printf("5) quit\n");
		printf("*****************************************************************\n");
		
		ch=getchar();
		if(ch=='1'){
			rate=8.75;
		}else if(ch=='2'){
			rate=9.44;
		}else if(ch=='3'){
			rate=10.00;
		}else if(ch=='4'){
			rate=11.20;
		}else if(ch=='5'){
			break;
		}else{
			continue;
		}
		
		printf("Enter work hours:");
		scanf("%lf",&hours);
	
		if(hours<=40){
			salary=rate*hours;
		} else{
			salary=rate*40+(hours-40)*rate*1.5;
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
			
	}while(1);

	
	
	return 0;
} 
