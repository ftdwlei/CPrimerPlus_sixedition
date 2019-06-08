#include<stdio.h>
int pow_2(int num,int count);
int main(void){
	int num[8];
	for(int i=0;i<8;i++){
		num[i]=pow_2(2,i);
	}
	
	int j=0;
	do{
		printf("%d\n",num[j]);
		j++;
	}while(j<8);
	
	return 0;
}

int pow_2(int num,int count){
	int pow_value=1;
	for(int i=0;i<count;i++){
		pow_value*=num;
	}
	return pow_value;
}
