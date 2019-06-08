#include<stdio.h>
int main(void){
	double invest_1=100;
	double invest_2=100;	
	int year=0;
	while(invest_1>=invest_2){
		invest_1+=100*0.1;
		invest_2+=invest_2*0.05;
		year++;
	}
	printf("%d %lf %lf\n",year,invest_1,invest_2);
	return 0;
}
