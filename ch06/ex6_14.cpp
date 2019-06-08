#include<stdio.h>
int main(void){
	double num[8],num_sum[8];
	double double_num,sum_num=0;
	for(int i=0;i<8;i++){
		printf("Enter a double number:"); 
		scanf("%lf",&double_num);
		num[i]=double_num; 
		sum_num+=double_num;
		num_sum[i]=sum_num; 
	}
	for(int i=0;i<8;i++){
		printf("%lf ",num[i]);
	}
	printf("\n");
	for(int j=0;j<8;j++){
		printf("%lf ",num_sum[j]);
	} 
	return 0;
}
