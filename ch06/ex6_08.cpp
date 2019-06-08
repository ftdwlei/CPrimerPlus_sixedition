#include<stdio.h>
int main(void){
	float a,b,c;
	while(scanf("%f",&a)&&scanf("%f",&b)){
		c=(a-b)/(a*b);
		printf("%f\n",c);
	}
	return 0;
} 
