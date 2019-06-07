#include<stdio.h>
int main(void){
	printf("Enter days:");
	int days,sum=0;
	scanf("%d",&days);
	for(int i=0;i<days;i++){
		sum+=(i+1)*(i+1);
	}
	printf("%d days money_sum is %d\n",days,sum);
	return 0;
}
