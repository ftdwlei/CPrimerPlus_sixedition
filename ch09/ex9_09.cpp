#include<stdio.h>
double power(double n,int p);
int main(void){
	printf("%lf",power(2,-3));
	return 0;
}

double power(double n,int p){
	double pow=1;
	if(n!=0){
		if(p>0){
			pow=n*power(n,p-1);
		}else if(p==0){
			return 1;
		}else{
			pow=1.0/n*power(n,p+1);
		}
	}else{
		pow =0;
	}

	return pow;
}
