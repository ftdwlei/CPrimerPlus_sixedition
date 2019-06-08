#include<stdio.h>
double pow(double n,int p);
int main(void){
	printf("%lf",pow(2,-3));
	return 0;
}

double pow(double n,int p){
	double pow=1;
	if(n!=0){
		if(p>0){
			for(int i=1;i<=p;i++){
				pow*=n;
			}
		}else if(p==0){
			return 1;
		}else{
			for(int i=1;i<=-p;i++){
				pow*=1.0/n;
			}
		}
	}else{
		pow =0;
	}

	return pow;
}
