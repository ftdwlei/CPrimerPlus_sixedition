#include<stdio.h>
int main(void){
	double money=100;
	int year=0;
	while(money>0){
		money+=money*0.08;
		money-=10;
		year++;
	}
	printf("year is %d\n",year);
	return 0;
}
