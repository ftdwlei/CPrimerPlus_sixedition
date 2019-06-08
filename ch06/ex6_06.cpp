#include<stdio.h>
int main(void){
	int small_mum,big_num;
	printf("Enter small num:");
	scanf("%d",&small_mum);
	printf("Enter big num:");
	scanf("%d",&big_num);
	
	for(int i=small_mum;i<=big_num;i++){
		printf("%8d %8d %8d\n",i,i*i,i*i*i);
	}
	return 0;
} 
