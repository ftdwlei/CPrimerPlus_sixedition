#include<stdio.h>
void larger_of(double *x,double *y);
int main(void){
	double num1=5,num2=10.2;
	printf("before: %lf %lf\n",num1,num2);
	larger_of(&num1,&num2);
	printf("after : %lf %lf\n",num1,num2);
}

void larger_of(double *x,double *y){
	if(*x>*y){
		*y=*x;
	}else{
		*x=*y;
	}
}
