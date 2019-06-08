#include<stdio.h>
void sort_num(double *x,double *y,double *z);
int main(void){
	double num1=5,num2=10.2,num3=7.5;
	printf("before: %lf %lf %lf\n",num1,num2,num3);
	sort_num(&num1,&num2,&num3);
	printf("after : %lf %lf %lf\n",num1,num2,num3);
}

void sort_num(double *x,double *y,double *z){
	double temp;
	if(*x>*y){
		temp=*x;
		*x=*y;
		*y=temp;
	}
	if(*y>*z){
		temp=*z;
		*z=*y;
		*y=temp;
	}
	if(*x>*y){
		temp=*x;
		*x=*y;
		*y=temp;
	}
}

