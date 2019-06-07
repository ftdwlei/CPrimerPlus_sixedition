#include<stdio.h>
int cube(int n);
int main(void){
	printf("Enter a number:");
	int num;
	scanf("%d",&num);
	printf("cube of %d is %d\n",num,cube(num));
	return 0;
}
int cube(int n){
	return n*n*n;
}
