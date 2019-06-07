#include<stdio.h>
int main(void){
	printf("Enter a number:");
	int num;
	scanf("%d",&num);
	for(int i=0;i<=10;i++){
		printf("%d\n",num+i);
	}
	return 0;
}
