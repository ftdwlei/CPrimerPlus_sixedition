#include<stdio.h>
void to_base_n(int num,int sys);
int main(void){
	to_base_n(129,8);
	return 0;
}

void to_base_n(int num,int sys){
	int x=num%sys;
	if(num>=sys){
		to_base_n(num/sys,sys);
	}
	printf("%d",x);
}
