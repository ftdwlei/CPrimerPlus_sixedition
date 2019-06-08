#include<stdio.h>
int main(void){
	int lower_num,upper_num;
	printf("Enter lower and upper integer limits: ");
	while(scanf("%d",&lower_num)&&scanf("%d",&upper_num)){
		int sum=0;
		if(lower_num>=upper_num){
			printf("Done\n");
			break;
		}else{
			for(int i=lower_num;i<=upper_num;i++){
				sum+=i*i;
			}
			printf("The sums of the squares from %d to %d is %d\n",lower_num*lower_num,upper_num*upper_num,sum);
		}
	}
	return 0;
} 
