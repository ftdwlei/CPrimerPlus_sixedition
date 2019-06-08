#include<stdio.h>
int main(void){
	int num[8];
	for(int i=0;i<8;i++){
		printf("Enter a integer number:"); 
		int int_num;
		scanf("%d",&int_num);
		num[i]=int_num;
	}
	for(int i=7;i>=0;i--){
		printf("%d\n",num[i]);
	} 
	return 0;
}
