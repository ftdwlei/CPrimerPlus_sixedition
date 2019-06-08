#include<stdio.h>
int main(void){
	int n;
	double sum1=0,sum2=0,sumall=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum1+=1.0/(n*1.0);
		if(i%2==0){
			sum2+=-1.0/(n*1.0);
		}else{
			sum2+=1.0/(n*1.0);
		}
		sumall+=sum1+sum2;
	}
	printf("sumall is %lf\n",sumall);
	return 0;
}
