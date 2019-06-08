#include<stdio.h>
double harmonic_mean(double x,double y);
int main(void){
	printf("%lf",harmonic_mean(2,4));
	return 0;
}

double harmonic_mean(double x,double y){
	return 1.0/((1.0/x+1.0/y)/2);
}
