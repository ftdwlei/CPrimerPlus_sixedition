#include<stdio.h>
float calc(float a,float b);
int main(void){
	float a,b;
	while(scanf("%f",&a)&&scanf("%f",&b)){
		printf("%f\n",calc(a,b));
	}
	return 0;
}

float calc(float a,float b){
	return (a-b)/(a*b);
	}	
