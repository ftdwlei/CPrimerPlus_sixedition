#include<stdio.h>
#include<float.h>
int main(void){
	double x=1.0/3.0;
	float y=1.0/3.0;
	printf("x=%.6f y=%.6f\n",x,y);
	printf("x=%.12f y=%.12f\n",x,y);
	printf("x=%.16f y=%.16f\n",x,y);
	printf("%e\n",FLT_DIG);
	printf("%e\n",DBL_DIG);
	return 0;
}
