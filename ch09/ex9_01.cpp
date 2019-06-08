#include<stdio.h>
double min(double x,double y);
int main(void){
	printf("%lf\n",min(3.5,5.5));
	return 0;
}

double min(double x,double y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}
