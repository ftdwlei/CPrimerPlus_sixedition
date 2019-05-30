#include<stdio.h>
int main(void){
	printf("Enter a floating-point value:");
	float num;
	scanf("%f",&num);
	printf("fixed-point notation:%f\n",num);
	printf("exponential notation:%e\n",num);
	printf("p notation:%a",num);//%a是以指数形式输出一个浮点数（十六进制）
	return 0;
}
